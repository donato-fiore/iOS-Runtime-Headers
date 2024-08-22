// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSGAMECONTROLLEROBSERVER_H
#define _UIFOCUSGAMECONTROLLEROBSERVER_H

@class UIFocusStateObserver;



@interface _UIFocusGameControllerObserver : UIFocusStateObserver {
    *__IOHIDManager _hidManager;
}




-(BOOL)isActive;
-(id)init;
-(void)_registerObserver;
-(void)_unregisterObserver;
-(void)dealloc;


@end


#endif