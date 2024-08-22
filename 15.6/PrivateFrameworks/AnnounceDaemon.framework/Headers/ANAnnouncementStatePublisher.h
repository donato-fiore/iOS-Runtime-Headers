// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANNOUNCEMENTSTATEPUBLISHER_H
#define ANANNOUNCEMENTSTATEPUBLISHER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANAnnouncementStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char * _name;
    int _registrationToken;
}




-(BOOL)_setName:(id)arg0 ;
-(BOOL)_setState:(NSUInteger)arg0 withToken:(int)arg1 ;
-(id)init;
-(void)_publishState:(NSUInteger)arg0 name:(id)arg1 ;
-(void)_register;
-(void)_unregister;
-(void)dealloc;
-(void)invalidate;
-(void)publishState:(NSUInteger)arg0 name:(id)arg1 ;


@end


#endif