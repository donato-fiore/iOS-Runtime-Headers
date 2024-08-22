// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCKMIRROREDRELATIONSHIP_H
#define NSCKMIRROREDRELATIONSHIP_H

@class NSString, NSData, NSNumber;


#import "NSManagedObject.h"
#import "NSCKRecordZoneMetadata.h"

@interface NSCKMirroredRelationship : NSManagedObject

@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSNumber *isPending;
@property (retain, nonatomic) NSNumber *isUploaded;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relationshipName;


+(id)entityPath;


@end


#endif