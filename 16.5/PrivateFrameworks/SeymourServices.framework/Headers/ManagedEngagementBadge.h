// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDENGAGEMENTBADGE_H
#define MANAGEDENGAGEMENTBADGE_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedEngagementBadge : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *marketingItemID;
@property (nonatomic, copy) NSString *notificationID;
@property (nonatomic, copy) NSDate *receivedDate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif