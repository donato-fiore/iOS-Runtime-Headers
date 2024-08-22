// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSENABLEDATAGATHERINGQUERYMO_H
#define DRSENABLEDATAGATHERINGQUERYMO_H

@class NSManagedObject, NSString, NSData, NSDate, NSUUID;



@interface DRSEnableDataGatheringQueryMO : NSManagedObject

@property (nonatomic) short attemptCount;
@property (copy, nonatomic) NSString *build;
@property (retain, nonatomic) NSData *contextDictionaryData;
@property (nonatomic) BOOL isContinue;
@property (copy, nonatomic) NSString *issueCategory;
@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSDate *queryDate;
@property (copy, nonatomic) NSUUID *queryID;
@property (copy, nonatomic) NSString *rejectionReason;
@property (nonatomic) short response;
@property (copy, nonatomic) NSString *teamID;


+(id)fetchRequest;


@end


#endif