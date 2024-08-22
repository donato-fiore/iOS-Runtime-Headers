// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTEFFECTSREMOTEVIEW_H
#define _UITEXTEFFECTSREMOTEVIEW_H

@class UIRemoteView;


#import "_UIRemoteViewController.h"

@interface _UITextEffectsRemoteView : UIRemoteView

@property (nonatomic) _UIRemoteViewController *remoteViewController; // ivar: _remoteViewController


+(BOOL)_requiresWindowTouches;
-(int)textEffectsVisibilityLevel;


@end


#endif