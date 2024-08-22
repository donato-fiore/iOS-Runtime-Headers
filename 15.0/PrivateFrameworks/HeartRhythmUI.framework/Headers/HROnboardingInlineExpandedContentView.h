// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRONBOARDINGINLINEEXPANDEDCONTENTVIEW_H
#define HRONBOARDINGINLINEEXPANDEDCONTENTVIEW_H

@class UIView;



@interface HROnboardingInlineExpandedContentView : UIView

@property (nonatomic) NSInteger currentUserInterfaceStyle; // ivar: _currentUserInterfaceStyle


+(CGFloat)_badgeFontDistance;
+(CGFloat)_bodyFontDistance;
+(CGFloat)_headingBodyFontDistance;
+(CGFloat)_headingToBadgeFontDistance;
+(CGFloat)_listFontDistance;
+(id)_badgeFont;
+(id)_badgeFontTextStyle;
+(id)_badgeLabelWithLocalizedText:(id)arg0 ;
+(id)_bodyFont;
+(id)_bodyFontTextStyle;
+(id)_bodyLabelWithAtrialFibrillationLocalizationKey:(id)arg0 ;
+(id)_bodyLabelWithLocalizedText:(id)arg0 ;
+(id)_bulletedTextViewWithLocalizationKey:(id)arg0 ;
+(id)_headingBodyFont;
+(id)_headingLabelWithAtrialFibrillationLocalizationKey:(id)arg0 ;
+(id)_headingLabelWithLocalizedText:(id)arg0 ;
+(id)_learnMoreListLabelWithLocalizedText:(id)arg0 URLIdentifier:(NSInteger)arg1 delegate:(id)arg2 ;
+(id)_listLabelWithAtrialFibrillationLocalizationKey:(id)arg0 ;
+(id)_listLabelWithLocalizedText:(id)arg0 ;
+(id)_makeViewWithContentItem:(id)arg0 ;
+(id)_spacingBetweenItems:(id)arg0 ;
+(id)learnMoreAboutAtrialFibrillationExpandedView;
+(id)viewWithItems:(id)arg0 ;


@end


#endif