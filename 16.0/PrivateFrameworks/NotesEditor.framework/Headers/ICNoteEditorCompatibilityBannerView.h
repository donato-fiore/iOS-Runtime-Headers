// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEEDITORCOMPATIBILITYBANNERVIEW_H
#define ICNOTEEDITORCOMPATIBILITYBANNERVIEW_H

@class UIView, ICLearnMoreTextView;



@interface ICNoteEditorCompatibilityBannerView : UIView

@property (nonatomic) CGFloat availableWidth; // ivar: _availableWidth
@property (retain, nonatomic) ICLearnMoreTextView *learnMoreTextView; // ivar: _learnMoreTextView
@property (readonly, nonatomic) CGFloat preferredHeight;


+(id)compatibilityAttributedString;
+(void)checkShouldShowCompatibilityBannerViewForNote:(id)arg0 parentViewController:(id)arg1 completion:(id)arg2 ;
-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)initWithFrame:(struct CGRect )arg0 parentViewController:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)contentSizeCategoryDidChange;
-(void)updateConstraints;


@end


#endif