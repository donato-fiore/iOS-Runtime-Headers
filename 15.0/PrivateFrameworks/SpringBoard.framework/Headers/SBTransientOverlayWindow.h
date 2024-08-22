// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSIENTOVERLAYWINDOW_H
#define SBTRANSIENTOVERLAYWINDOW_H



#import "SBWindow.h"

@interface SBTransientOverlayWindow : SBWindow



+(BOOL)_isSecure;
+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;


@end


#endif