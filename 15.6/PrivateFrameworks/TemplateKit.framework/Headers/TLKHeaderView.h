// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKHEADERVIEW_H
#define TLKHEADERVIEW_H

@class NSString;
@protocol NUIContainerViewDelegate;


#import "TLKView.h"
#import "TLKStackView.h"
#import "TLKMultilineText.h"
#import "TLKLabel.h"
#import "TLKImage.h"
#import "TLKImageView.h"
#import "TLKRoundedCornerLabel.h"
#import "TLKRichText.h"

@interface TLKHeaderView : TLKView <NUIContainerViewDelegate>



@property (nonatomic) NSInteger axis; // ivar: _axis
@property (retain, nonatomic) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TLKMultilineText *footnote; // ivar: _footnote
@property (retain, nonatomic) TLKLabel *footnoteLabel; // ivar: _footnoteLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKImage *image; // ivar: _image
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) TLKStackView *innerStackView; // ivar: _innerStackView
@property (retain, nonatomic) NSString *roundedBorderText; // ivar: _roundedBorderText
@property (retain, nonatomic) TLKRoundedCornerLabel *roundedCornerLabel; // ivar: _roundedCornerLabel
@property (retain, nonatomic) TLKRichText *subtitle; // ivar: _subtitle
@property (retain, nonatomic) TLKImage *subtitleImage; // ivar: _subtitleImage
@property (retain, nonatomic) TLKImageView *subtitleImageView; // ivar: _subtitleImageView
@property (nonatomic) BOOL subtitleIsEmphasized; // ivar: _subtitleIsEmphasized
@property (retain, nonatomic) TLKLabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) TLKStackView *subtitleStackView; // ivar: _subtitleStackView
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKMultilineText *title; // ivar: _title
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) TLKMultilineText *trailingText; // ivar: _trailingText
@property (retain, nonatomic) TLKLabel *trailingTextLabel; // ivar: _trailingTextLabel
@property (nonatomic) BOOL useCompactWidth; // ivar: _useCompactWidth


-(BOOL)usesDefaultLayoutMargins;
-(id)hasImage;
-(id)setupContentView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)didMoveToWindow;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif