// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCKIMPORTPENDINGRELATIONSHIP_H
#define NSCKIMPORTPENDINGRELATIONSHIP_H

@class NSString, NSNumber;


#import "NSManagedObject.h"
#import "NSCKImportOperation.h"

@interface NSCKImportPendingRelationship : NSManagedObject

@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSCKImportOperation *operation;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *recordZoneName;
@property (retain, nonatomic) NSString *recordZoneOwnerName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relatedRecordZoneName;
@property (retain, nonatomic) NSString *relatedRecordZoneOwnerName;
@property (retain, nonatomic) NSString *relationshipName;




@end


#endif