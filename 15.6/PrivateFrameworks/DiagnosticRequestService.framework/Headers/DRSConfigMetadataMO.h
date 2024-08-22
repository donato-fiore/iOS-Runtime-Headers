// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCONFIGMETADATAMO_H
#define DRSCONFIGMETADATAMO_H

@class NSManagedObject, NSDate, NSString, NSUUID;


#import "DRConfigMO.h"

@interface DRSConfigMetadataMO : NSManagedObject

@property (copy, nonatomic) NSDate *appliedDate;
@property (copy, nonatomic) NSDate *completedDate;
@property (copy, nonatomic) NSString *completionDescription;
@property (nonatomic) NSInteger completionType;
@property (retain, nonatomic) DRConfigMO *configMO;
@property (copy, nonatomic) NSUUID *configUUID;
@property (nonatomic) BOOL logTelemetry;
@property (copy, nonatomic) NSDate *receivedDate;
@property (nonatomic) BOOL reportToDecisionServer;
@property (nonatomic) short state;
@property (copy, nonatomic) NSString *teamID;


+(id)fetchRequest;


@end


#endif