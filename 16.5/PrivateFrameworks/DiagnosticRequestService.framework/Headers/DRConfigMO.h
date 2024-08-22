// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRCONFIGMO_H
#define DRCONFIGMO_H

@class NSManagedObject, NSString, NSUUID, NSDate, NSData;


#import "DRSConfigMetadataMO.h"

@interface DRConfigMO : NSManagedObject

@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *configDescription;
@property (copy, nonatomic) NSUUID *configUUID;
@property (copy, nonatomic) NSDate *endDate;
@property (retain, nonatomic) DRSConfigMetadataMO *metadata;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) BOOL payloadIsJSON;
@property (copy, nonatomic) NSDate *receivedDate;
@property (nonatomic) BOOL skippedHysteresis;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *teamID;


+(id)fetchRequest;


@end


#endif