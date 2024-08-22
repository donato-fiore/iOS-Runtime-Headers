// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT17MANAGEDCLOUDORDER_H
#define _TTC10FINANCEKIT17MANAGEDCLOUDORDER_H

@class NSManagedObject, NSUUID, NSDate, NSData, NSString;



@interface _TtC10FinanceKit17ManagedCloudOrder : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) BOOL isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic, copy) NSData *orderData;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic) short schemaVersion;
@property (nonatomic, copy) NSDate *updatedDate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif