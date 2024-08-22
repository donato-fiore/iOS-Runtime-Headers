// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOSINK_H
#define MOSINK_H

@class NSString;
@protocol MOCancellable, MOSubscription;

#import <Foundation/Foundation.h>

#import "MOSubscriber.h"

@interface MOSink : MOSubscriber <MOCancellable>



@property (readonly, nonatomic) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject *lock; // ivar: _lock
@property (readonly, nonatomic) id *recieveCompletionBlock; // ivar: _recieveCompletionBlock
@property (readonly, nonatomic) id *recieveInputBlock; // ivar: _recieveInputBlock
@property (readonly, nonatomic) NSObject<MOSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


-(NSUInteger)receiveInput:(id)arg0 ;
// -(id)initWithCompletion:(id)arg0 recieveInput:(unk)arg1  ;
-(void)cancel;
-(void)dealloc;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif