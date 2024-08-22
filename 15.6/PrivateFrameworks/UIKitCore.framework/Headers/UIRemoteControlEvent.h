// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIREMOTECONTROLEVENT_H
#define UIREMOTECONTROLEVENT_H



#import "UIEvent.h"

@interface UIRemoteControlEvent : UIEvent {
    NSInteger _subtype;
}




-(NSInteger)subtype;
-(NSInteger)type;
-(id)_init;
-(id)_windows;
-(void)_sendEventToResponder:(id)arg0 ;
-(void)_setSubtype:(NSInteger)arg0 ;
-(void)_simpleRemoteActionNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif