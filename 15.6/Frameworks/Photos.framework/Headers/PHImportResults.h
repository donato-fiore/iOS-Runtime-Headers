// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMPORTRESULTS_H
#define PHIMPORTRESULTS_H

@class NSDate, NSError, NSMutableArray, NSMutableDictionary;


#import "PHImportExceptionRecorder.h"
#import "PHImportSource.h"

@interface PHImportResults : PHImportExceptionRecorder

@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly) NSError *error;
@property (readonly) NSUInteger failedToImportCount;
@property (retain, nonatomic) NSMutableArray *importRecords; // ivar: _importRecords
@property (readonly) PHImportSource *importSource; // ivar: _importSource
@property (readonly) NSUInteger importedCount;
@property (retain, nonatomic) NSMutableDictionary *pmrInfo; // ivar: _pmrInfo
@property (readonly) unsigned char result; // ivar: _result
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


+(id)resultsWithException:(id)arg0 ;
+(id)resultsWithExceptions:(id)arg0 ;
-(CGFloat)runTime;
-(id)exceptions;
-(id)generatePMRInfo;
-(id)importRecordExceptions;
-(id)init;
-(void)addImportRecord:(id)arg0 ;
-(void)addUnsupportedPath:(id)arg0 ;
-(void)insertStart:(id)arg0 end:(id)arg1 intoGroups:(id)arg2 ofType:(NSUInteger)arg3 ;
-(void)log:(id)arg0 activity:(id)arg1 description:(id)arg2 digits:(NSUInteger)arg3 ;
-(void)logPMR;
-(void)verifyGroups:(id)arg0 ;


@end


#endif