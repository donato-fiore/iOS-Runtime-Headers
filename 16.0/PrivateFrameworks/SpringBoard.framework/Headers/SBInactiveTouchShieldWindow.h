// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINACTIVETOUCHSHIELDWINDOW_H
#define SBINACTIVETOUCHSHIELDWINDOW_H

@class UIRootWindow;



@interface SBInactiveTouchShieldWindow : UIRootWindow



+(BOOL)_isSecure;
+(id)emptyContentImage;
-(BOOL)_appearsInLoupe;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_usesWindowServerHitTesting;
-(id)initWithDisplay:(id)arg0 ;


@end


#endif