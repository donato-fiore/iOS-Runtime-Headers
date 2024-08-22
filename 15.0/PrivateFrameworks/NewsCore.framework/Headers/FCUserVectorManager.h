// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUSERVECTORMANAGER_H
#define FCUSERVECTORMANAGER_H

@class NSDate;
@protocol FCUserVectorManager, FCBundleSubscriptionProviderType, FCContentContext;

#import <Foundation/Foundation.h>

#import "FCAsyncSerialQueue.h"
#import "FCSubscriptionList.h"
#import "FCUserVector.h"

@interface FCUserVectorManager : NSObject <FCUserVectorManager>



@property (retain, nonatomic) NSObject<FCBundleSubscriptionProviderType> *bundleSubscriptionProvider; // ivar: _bundleSubscriptionProvider
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (retain, nonatomic) FCAsyncSerialQueue *queue; // ivar: _queue
@property (retain, nonatomic) FCSubscriptionList *subscriptionList; // ivar: _subscriptionList
@property (retain, nonatomic) FCUserVector *userVector; // ivar: _userVector


-(id)initWithContentContext:(id)arg0 bundleSubscriptionProvider:(id)arg1 subscriptionList:(id)arg2 ;
-(void)fetchUserVectorProvider:(id)arg0 ;


@end


#endif