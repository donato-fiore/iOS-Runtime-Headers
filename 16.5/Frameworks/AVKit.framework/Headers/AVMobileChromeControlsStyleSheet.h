// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILECHROMECONTROLSSTYLESHEET_H
#define AVMOBILECHROMECONTROLSSTYLESHEET_H

@class UIFont;


#import "AVMobileControlsStyleSheet.h"

@interface AVMobileChromeControlsStyleSheet : AVMobileControlsStyleSheet {
    UIEdgeInsets _fullscreenInsets;
    UIEdgeInsets _embeddedInlineInsets;
    CGFloat _standardPaddingFullScreen;
    CGFloat _standardPaddingInline;
    BOOL _shouldUseCompactFullScreenSize;
}


@property (readonly, nonatomic) CGFloat additionalInlinePaddingForDodgingSafeArea; // ivar: _additionalInlinePaddingForDodgingSafeArea
@property (readonly, nonatomic) CGSize audioRoutePickerFullScreenSize; // ivar: _audioRoutePickerFullScreenSize
@property (readonly, nonatomic) CGSize defaultItemFullScreenSize; // ivar: _defaultItemFullScreenSize
@property (readonly, nonatomic) CGSize defaultItemInlineSize; // ivar: _defaultItemInlineSize
@property (readonly, nonatomic) NSDirectionalEdgeInsets doubleRowLayoutMargins; // ivar: _doubleRowLayoutMargins
@property (readonly, nonatomic) NSDirectionalEdgeInsets doubleRowLayoutMarginsWhenShowingScrubInstructions; // ivar: _doubleRowLayoutMarginsWhenShowingScrubInstructions
@property (readonly, nonatomic) NSDirectionalEdgeInsets doublerowLayoutMarginsWhenShowingCustomContentInfo; // ivar: _doublerowLayoutMarginsWhenShowingCustomContentInfo
@property (readonly, nonatomic) UIFont *infoLabelFont; // ivar: _infoLabelFont
@property (readonly, nonatomic) CGFloat liveBroadcastLabelTopToBackdropTopDistance; // ivar: _liveBroadcastLabelTopToBackdropTopDistance
@property (readonly, nonatomic) CGFloat maximumMultiRowTransportControlsWidth; // ivar: _maximumMultiRowTransportControlsWidth
@property (readonly, nonatomic) CGFloat maximumProminentPlayButtonDimension; // ivar: _maximumProminentPlayButtonDimension
@property (readonly, nonatomic) CGFloat maximumTransportControlsWidth; // ivar: _maximumTransportControlsWidth
@property (readonly, nonatomic) CGFloat minimumProminentPlayButtonDimension; // ivar: _minimumProminentPlayButtonDimension
@property (readonly, nonatomic) CGSize minimumScrubberSize; // ivar: _minimumScrubberSize
@property (readonly, nonatomic) CGFloat minimumSingleButtonTransportControlsWidth; // ivar: _minimumSingleButtonTransportControlsWidth
@property (readonly, nonatomic) CGFloat minimumTransportControlsWidth; // ivar: _minimumTransportControlsWidth
@property (readonly, nonatomic) CGSize routePickerButtonFullScreenSize; // ivar: _routePickerButtonFullScreenSize
@property (readonly, nonatomic) CGSize routePickerButtonInlineSize; // ivar: _routePickerButtonInlineSize
@property (readonly, nonatomic) UIFont *scrubberInfoLabelFont; // ivar: _scrubberInfoLabelFont
@property (readonly, nonatomic) UIFont *scrubberTimeLabelFont; // ivar: _scrubberTimeLabelFont
@property (readonly, nonatomic) CGFloat spacingBetweenScrubInstructionsAndScrubber; // ivar: _spacingBetweenScrubInstructionsAndScrubber
@property (readonly, nonatomic) CGFloat standardInteritemPadding; // ivar: _standardInteritemPadding
@property (readonly, nonatomic) CGSize volumeButtonFullScreenSize; // ivar: _volumeButtonFullScreenSize
@property (readonly, nonatomic) CGSize volumeButtonInlineSize; // ivar: _volumeButtonInlineSize
@property (readonly, nonatomic) CGFloat volumeSliderCompactFullScreenWidth; // ivar: _volumeSliderCompactFullScreenWidth
@property (readonly, nonatomic) CGFloat volumeSliderInlineWidth; // ivar: _volumeSliderInlineWidth
@property (readonly, nonatomic) CGFloat volumeSliderPadding; // ivar: _volumeSliderPadding
@property (readonly, nonatomic) CGFloat volumeSliderRegularFullScreenWidth; // ivar: _volumeSliderRegularFullScreenWidth


-(CGFloat)standardPaddingFullScreen;
-(CGFloat)standardPaddingInline;
-(id)initWithTraitCollection:(id)arg0 shouldUseCompactFullScreenSize:(BOOL)arg1 ;
-(struct UIEdgeInsets )embeddedInlineInsets;
-(struct UIEdgeInsets )landscapeFullscreenInsets;
-(struct UIEdgeInsets )portraitFullscreenInsets;


@end


#endif