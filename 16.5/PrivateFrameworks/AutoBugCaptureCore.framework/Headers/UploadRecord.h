// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPLOADRECORD_H
#define UPLOADRECORD_H

@class NSManagedObject, NSMutableArray, NSDate, NSString;


#import "DiagnosticCaseStorage.h"

@interface UploadRecord : NSManagedObject

@property (nonatomic) BOOL allowsCellular;
@property (retain, nonatomic) DiagnosticCaseStorage *caseStorage;
@property (nonatomic) short environment;
@property (retain, nonatomic) NSMutableArray *fileURLs; // ivar: fileURLs
@property (copy, nonatomic) NSDate *finishTime;
@property (nonatomic) short numberOfFiles;
@property (copy, nonatomic) NSString *operationID;
@property (nonatomic) short preflightResult;
@property (nonatomic) short priority;
@property (nonatomic) float progress;
@property (copy, nonatomic) NSDate *startTime;
@property (nonatomic) NSInteger totalBytes;
@property (nonatomic) short uploadState;


+(id)fetchRequest;


@end


#endif