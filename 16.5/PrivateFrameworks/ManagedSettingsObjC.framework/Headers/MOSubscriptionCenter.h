// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOSUBSCRIPTIONCENTER_H
#define MOSUBSCRIPTIONCENTER_H

@class NSString, NSSet, NSMutableDictionary, NSXPCConnection;
@protocol MOManagedSettingsSubscriberProxy;

#import <Foundation/Foundation.h>

#import "MOPassthroughSubject.h"

@interface MOSubscriptionCenter : NSObject <MOManagedSettingsSubscriberProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *effectiveInterestedGroups;
@property (readonly, nonatomic) MOPassthroughSubject *effectiveSubject; // ivar: _effectiveSubject
@property (readonly, nonatomic) NSMutableDictionary *effectiveSubscriptions; // ivar: _effectiveSubscriptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject *subscriptionLock; // ivar: _subscriptionLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)new;
+(id)sharedCenter;
-(id)init;
-(void)effectiveSettingsChangedForGroups:(id)arg0 ;
-(void)subscribeForEffectiveChanges:(id)arg0 identifier:(id)arg1 ;
-(void)unsubscribeFromEffectiveChanges:(id)arg0 ;
-(void)updateSubscription;


@end


#endif