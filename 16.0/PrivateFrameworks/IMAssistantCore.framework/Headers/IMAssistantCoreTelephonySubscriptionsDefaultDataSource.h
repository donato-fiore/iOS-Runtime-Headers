// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMASSISTANTCORETELEPHONYSUBSCRIPTIONSDEFAULTDATASOURCE_H
#define IMASSISTANTCORETELEPHONYSUBSCRIPTIONSDEFAULTDATASOURCE_H

@class NSString;
@protocol IMAssistantCoreTelephonySubscriptionsDataSource;

#import <Foundation/Foundation.h>


@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject <IMAssistantCoreTelephonySubscriptionsDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceHasMultipleSubscriptions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)bestSenderIdentityForChatWithHandleIDs:(id)arg0 ;
-(id)handleIDForSenderIdentity:(id)arg0 ;
-(id)simIDForSenderIdentity:(id)arg0 ;
-(id)subscriptionContextForSenderIdentity:(id)arg0 ;


@end


#endif