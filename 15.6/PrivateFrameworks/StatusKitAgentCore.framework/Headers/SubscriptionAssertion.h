// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBSCRIPTIONASSERTION_H
#define SUBSCRIPTIONASSERTION_H

@class NSManagedObject, NSString;



@interface SubscriptionAssertion : NSManagedObject

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *statusTypeIdentifier;


+(id)fetchRequest;
+(id)predicateForApplicationIdentifier:(id)arg0 ;
+(id)predicateForChannelIdentifier:(id)arg0 ;
+(id)predicateForStatusTypeIdentifier:(id)arg0 ;


@end


#endif