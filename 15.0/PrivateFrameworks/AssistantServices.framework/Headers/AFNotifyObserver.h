// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFNOTIFYOBSERVER_H
#define AFNOTIFYOBSERVER_H

@class NSString;
@protocol AFInvalidating, OS_dispatch_queue, AFNotifyObserverDelegate;

#import <Foundation/Foundation.h>


@interface AFNotifyObserver : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _options;
    id<AFNotifyObserverDelegate> *_delegate;
    int _registrationToken;
    _flags _flags;
    NSUInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 options:(NSUInteger)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)_handleNotificationWithToken:(int)arg0 ;
-(void)_invalidate;
-(void)_updateStateWithToken:(int)arg0 ;
-(void)dealloc;
-(void)getStateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif