// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOCKSCREENMETRICS_H
#define SBFLOCKSCREENMETRICS_H


#import <Foundation/Foundation.h>


@interface SBFLockScreenMetrics : NSObject



+(CGFloat)_notificationListBottomOffset;
+(CGFloat)_notificationListSideOffset;
+(CGFloat)_notificationListTopPadding;
+(CGFloat)_subTitleHeight;
+(CGFloat)dateBaselineOffsetFromTime;
+(CGFloat)dateLabelFontSize;
+(CGFloat)dateViewBaselineY;
+(CGFloat)dateViewSideMargin;
+(CGFloat)deviceInformationLabelFontLeading;
+(CGFloat)deviceInformationLabelFontSize;
+(CGFloat)deviceInformationParagraphSpacing;
+(CGFloat)logoutLabelFontSize;
+(CGFloat)pinAlphanumericEntryFieldBottomYDistanceFromKeyboard;
+(CGFloat)pinFixedDigitEntryFieldBottomYDistanceFromNumberPadTopButton:(BOOL)arg0 ;
+(CGFloat)pinFixedDigitEntryFieldIndicatorDiameter;
+(CGFloat)pinFixedDigitEntryFieldIndicatorPaddingWidth;
+(CGFloat)pinFixedDigitEntryFieldIndicatorStrokeSize;
+(CGFloat)pinKeyboardEntryFieldOffset:(BOOL)arg0 ;
+(CGFloat)pinKeypadEntryFieldOffsetForSubtitle;
+(CGFloat)pinKeypadStatusSubtitleTitleExtraOffset;
+(CGFloat)pinKeypadStatusTitleBaselineOffsetFromEntryField;
+(CGFloat)pinKeypadStatusTitleBaselineOffsetFromEntryFieldIncludingSubtitle;
+(CGFloat)pinKeypadStatusTitleBaselineOffsetFromTitle;
+(CGFloat)pinKeypadStatusTitleExtraOffsetIncludingSubtitle;
+(CGFloat)pinLongNumericEntryFieldBottomYDistanceFromNumberPadTopButton;
+(CGFloat)pinNumberPadAncillaryButtonOffset;
+(CGFloat)pinNumberPadBaseOffsetFromTopOfScreen:(BOOL)arg0 ;
+(CGFloat)pinNumberPadBottomPaddingHeight;
+(CGFloat)pinNumberPadButtonOuterCircleDiameter;
+(CGFloat)pinNumberPadButtonPaddingHeight;
+(CGFloat)pinNumberPadButtonPaddingWidth;
+(CGFloat)pinNumberPadWidth;
+(CGFloat)proudLockCenterFromTopOfScreen;
+(CGFloat)proudLockOffsetFromTopOfScreen;
+(CGFloat)proudLockScaleFactor;
+(CGFloat)scaledFontSize:(CGFloat)arg0 withMaximumFontSizeCategory:(id)arg1 ;
+(CGFloat)slideToUnlockFontSize;
+(CGFloat)slideToUnlockOverlayMargin;
+(CGFloat)slideUpGrabberInset;
+(CGFloat)subtitleBaselineOffsetFromTopOfScreen;
+(id)pinKeypadStatusSubtitleViewTitleFont;
+(id)pinKeypadStatusTitleViewTitleFont;
+(struct CGSize )proudLockAssetSize;
+(struct CGSize )systemApertureProudLockAssetSize;
+(struct UIEdgeInsets )deviceInformationInsets;
+(struct UIEdgeInsets )logoutInsets;
+(struct UIEdgeInsets )notificationListInsets;
+(struct UIEdgeInsets )slideToUnlockInsets;


@end


#endif