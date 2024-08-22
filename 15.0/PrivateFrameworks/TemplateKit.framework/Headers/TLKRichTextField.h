// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKRICHTEXTFIELD_H
#define TLKRICHTEXTFIELD_H

@class NSString, UIFont;
@protocol NUIContainerViewDelegate, TLKObservable, TLKObserver;


#import "TLKStackView.h"
#import "TLKIconsView.h"
#import "TLKRichText.h"
#import "TLKRoundedCornerLabels.h"
#import "TLKStarsView.h"
#import "TLKLabel.h"

@interface TLKRichTextField : TLKStackView <NUIContainerViewDelegate, TLKObservable, TLKObserver>



@property (nonatomic) NSInteger batchUpdateCount; // ivar: batchUpdateCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKIconsView *iconView; // ivar: _iconView
@property (weak) NSObject<TLKObserver> *observer; // ivar: observer
@property (nonatomic) NSUInteger prominence;
@property (retain, nonatomic) TLKRichText *richText; // ivar: _richText
@property (nonatomic) NSUInteger roundedCornerLabelSizeConfiguration; // ivar: _roundedCornerLabelSizeConfiguration
@property (retain, nonatomic) TLKRoundedCornerLabels *roundedCornerLabels; // ivar: _roundedCornerLabels
@property (retain, nonatomic) TLKStarsView *starRatingView; // ivar: _starRatingView
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKLabel *textLabel; // ivar: _textLabel
@property (nonatomic) BOOL useCompactMode; // ivar: _useCompactMode


-(id)attributedString;
-(id)init;
-(id)viewForLastBaselineLayout;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)propertiesDidChange;
-(void)updateIcons:(id)arg0 ;
-(void)updateRoundedCornerLabels:(id)arg0 ;
-(void)updateStarRating:(id)arg0 ;
-(void)updateWithRichText:(id)arg0 ;


@end


#endif