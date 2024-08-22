// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSIENTSUBSCRIPTIONHISTORY_H
#define TRANSIENTSUBSCRIPTIONHISTORY_H

@class NSManagedObject, NSString, NSDate;



@interface TransientSubscriptionHistory : NSManagedObject

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSDate *lastSubscriptionDate;


+(id)fetchRequest;
+(id)predicateForChannelIdentifier:(id)arg0 ;
+(id)predicateForLastSubscriptionDate:(id)arg0 ;
+(id)sortDescriptorForLastSubscriptionDateAscending:(BOOL)arg0 ;


@end


#endif