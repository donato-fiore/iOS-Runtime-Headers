// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSREQUESTMO_H
#define DRSREQUESTMO_H

@class NSManagedObject, NSString, NSNumber, NSData, NSDate, NSUUID;



@interface DRSRequestMO : NSManagedObject

@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSNumber *cachedLogSize;
@property (retain, nonatomic) NSData *contextDictionaryData;
@property (nonatomic) short decisionServerDecision;
@property (copy, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL hasBeenCountedByTelemetry;
@property (copy, nonatomic) NSString *issueCategory;
@property (copy, nonatomic) NSString *issueDescription;
@property (copy, nonatomic) NSString *logPath;
@property (copy, nonatomic) NSDate *requestDate;
@property (copy, nonatomic) NSUUID *requestID;
@property (nonatomic) NSInteger requestMCT;
@property (nonatomic) NSInteger requestState;
@property (copy, nonatomic) NSString *teamID;
@property (nonatomic) short uploadAttemptCount;


+(id)fetchRequest;


@end


#endif