// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAAPPSUBSCRIPTION_H
#define SAAPPSUBSCRIPTION_H

@class NSString, NSArray;
@protocol SABackgroundContextObject;


#import "SADomainObject.h"

@interface SAAppSubscription : SADomainObject <SABackgroundContextObject>



@property (copy, nonatomic) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *subscriptionTiers;
@property (readonly) Class superclass;


+(id)appSubscription;
+(id)appSubscriptionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif