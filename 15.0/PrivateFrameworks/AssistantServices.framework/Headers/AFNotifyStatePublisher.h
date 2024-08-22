// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFNOTIFYSTATEPUBLISHER_H
#define AFNOTIFYSTATEPUBLISHER_H

@class NSString;
@protocol AFInvalidating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFNotifyStatePublisher : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    char * _name;
    int _registrationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_getState:(*NSUInteger)arg0 withToken:(int)arg1 ;
-(BOOL)_setState:(NSUInteger)arg0 withToken:(int)arg1 ;
-(id)initWithName:(id)arg0 queue:(id)arg1 ;
-(void)_register;
-(void)_unregister;
-(void)dealloc;
-(void)invalidate;
-(void)publishState:(NSUInteger)arg0 ;
-(void)publishStateWithBlock:(id)arg0 ;


@end


#endif