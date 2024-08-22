// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUINTERFACEMANAGER_H
#define PUINTERFACEMANAGER_H


#import <Foundation/Foundation.h>


@interface PUInterfaceManager : NSObject



+(BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg0 ;
+(BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg0 ;
+(id)beginDisablingUserInteractionForReason:(NSInteger)arg0 ;
+(id)beginDisablingUserInteractionForReason:(NSInteger)arg0 withExpectedTimeout:(CGFloat)arg1 ;
+(id)currentTheme;
+(void)_disabledUserInteractionRequestDidTimeOut:(id)arg0 ;
+(void)_handleInteractionDisablingTimeout;
+(void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+(void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+(void)_handleInteractionDisablingTimeoutForBurningInTrim;
+(void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+(void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+(void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+(void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+(void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+(void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+(void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+(void)_handleInteractionDisablingTimeoutForPhotoEditorSwitchingSource;
+(void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+(void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+(void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+(void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+(void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+(void)endDisablingUserInteraction:(id)arg0 ;


@end


#endif