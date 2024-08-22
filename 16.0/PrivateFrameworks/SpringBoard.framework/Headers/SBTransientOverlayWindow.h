// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSIENTOVERLAYWINDOW_H
#define SBTRANSIENTOVERLAYWINDOW_H



#import "SBSecureWindow.h"

@interface SBTransientOverlayWindow : SBSecureWindow



+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;
-(id)hostedSceneIdentityTokens;


@end


#endif