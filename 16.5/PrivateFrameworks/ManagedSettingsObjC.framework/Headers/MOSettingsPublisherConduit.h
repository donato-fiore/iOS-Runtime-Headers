// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOSETTINGSPUBLISHERCONDUIT_H
#define MOSETTINGSPUBLISHERCONDUIT_H

@class NSString, NSUUID, NSSet;
@protocol MOSubscription;

#import <Foundation/Foundation.h>

#import "MOSubscriber.h"

@interface MOSettingsPublisherConduit : MOSubscriber <MOSubscription>



@property (readonly, nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSUInteger currentDemand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger demand; // ivar: _demand
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) MOSubscriber *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *interestedGroups; // ivar: _interestedGroups
@property (readonly, nonatomic) NSObject *lock; // ivar: _lock
@property (readonly, nonatomic) id *startBlock; // ivar: _startBlock
@property (readonly, nonatomic) id *stopBlock; // ivar: _stopBlock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MOSubscription> *upstream; // ivar: _upstream


-(NSUInteger)receiveInput:(id)arg0 ;
// -(id)initWithDownstream:(id)arg0 interestedGroups:(id)arg1 startBlock:(id)arg2 stopBlock:(unk)arg3  ;
-(void)cancel;
-(void)dealloc;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSUInteger)arg0 ;


@end


#endif