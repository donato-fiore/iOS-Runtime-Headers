// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACLABELEDBADGEVIEW_H
#define CACLABELEDBADGEVIEW_H

@class UIView, UILabel, UIImageView, NSString;


#import "CACAdaptiveBackdropView.h"

@interface CACLabeledBadgeView : UIView

@property (retain, nonatomic) CACAdaptiveBackdropView *_backdropView; // ivar: __backdropView
@property (retain, nonatomic) UILabel *_labelView; // ivar: __labelView
@property (readonly) NSInteger arrowOrientation; // ivar: _arrowOrientation
@property (retain, nonatomic) UIImageView *badgeMaskImageView; // ivar: _badgeMaskImageView
@property (readonly) NSInteger badgePresentation; // ivar: _badgePresentation
@property (nonatomic) BOOL isContrastBackdrop; // ivar: _isContrastBackdrop
@property (readonly) NSString *label; // ivar: _label


+(CGFloat)_heightForBadgeWithText;
+(CGFloat)badgeFontSize;
+(id)_badgeFont;
+(id)_badgeFontTextStyle;
+(id)_badgeImageWithNoArrow;
+(id)_badgeImageWithNoArrowAndBorder;
+(id)_badgeImageWithRightArrow;
+(id)_badgeImageWithTinyRightArrow;
+(id)_maskImageForBadgePresentation:(NSInteger)arg0 arrowOrientation:(NSInteger)arg1 ;
+(id)imageBundle;
+(struct CGSize )sizeOfBadgeGivenNumberOfDisplayedDigits:(NSInteger)arg0 arrowOrientation:(NSInteger)arg1 badgePresentation:(NSInteger)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 label:(id)arg1 arrowOrientation:(NSInteger)arg2 badgePresentation:(NSInteger)arg3 isContrasted:(BOOL)arg4 ;
-(id)contrastedCopy;
-(id)copy;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 label:(id)arg1 arrowOrientation:(NSInteger)arg2 badgePresentation:(NSInteger)arg3 ;
-(void)_setUpSubviews;
-(void)layoutSubviews;


@end


#endif