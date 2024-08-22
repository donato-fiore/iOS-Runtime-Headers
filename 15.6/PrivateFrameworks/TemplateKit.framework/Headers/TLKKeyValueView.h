// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKKEYVALUEVIEW_H
#define TLKKEYVALUEVIEW_H

@class NSString, NSArray;
@protocol NUIContainerViewDelegate;


#import "TLKView.h"
#import "TLKStackView.h"
#import "TLKImage.h"
#import "TLKImageView.h"
#import "TLKKeyValueGridView.h"

@interface TLKKeyValueView : TLKView <NUIContainerViewDelegate>



@property (retain, nonatomic) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKImage *image; // ivar: _image
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat lastMeasuredWidth; // ivar: _lastMeasuredWidth
@property (retain, nonatomic) TLKKeyValueGridView *leadingGrid; // ivar: _leadingGrid
@property (retain, nonatomic) NSArray *leadingTuples; // ivar: _leadingTuples
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKKeyValueGridView *trailingGrid; // ivar: _trailingGrid
@property (retain, nonatomic) NSArray *trailingTuples; // ivar: _trailingTuples


+(NSUInteger)visibleRowsInGrid:(id)arg0 ;
-(BOOL)containerView:(id)arg0 shouldRestartMeasurementDueToCompressionInAxis:(NSInteger)arg1 forReason:(NSInteger)arg2 ;
-(NSInteger)currentStackViewDistribution;
-(NSUInteger)numberOfVisibleRowsForLeadingGrid;
-(NSUInteger)numberOfVisibleRowsForTrailingGrid;
-(id)leadingTextKeyLabels;
-(id)setupContentView;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)_reconfigureForCompressedState;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)observedPropertiesChanged;


@end


#endif