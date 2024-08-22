// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKCHANGESETMO_H
#define _DKCHANGESETMO_H

@class NSManagedObject, NSData, NSString, NSDate, NSNumber;



@interface _DKChangeSetMO : NSManagedObject

@property (retain, nonatomic) NSData *changeSet;
@property (copy, nonatomic) NSString *ckForeignKey;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *sequenceNumber;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSNumber *version;




@end


#endif