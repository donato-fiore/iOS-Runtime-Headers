// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFANALYTICSSQLITESTORE_H
#define SFANALYTICSSQLITESTORE_H

@class NSArray, NSDate;


#import "SFSQLite.h"

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *hardFailures;
@property (readonly) NSArray *samples;
@property (readonly) NSArray *softFailures;
@property (retain) NSDate *uploadDate;


+(id)storeWithPath:(id)arg0 schema:(id)arg1 ;
-(BOOL)tryToOpenDatabase;
-(NSInteger)hardFailureCountForEventType:(id)arg0 ;
-(NSInteger)softFailureCountForEventType:(id)arg0 ;
-(NSInteger)successCountForEventType:(id)arg0 ;
-(id)summaryCounts;
-(void)addEventDict:(id)arg0 toTable:(id)arg1 ;
-(void)addEventDict:(id)arg0 toTable:(id)arg1 timestampBucket:(unsigned int)arg2 ;
-(void)addSample:(id)arg0 forName:(id)arg1 ;
-(void)clearAllData;
-(void)dealloc;
-(void)incrementHardFailureCountForEventType:(id)arg0 ;
-(void)incrementSoftFailureCountForEventType:(id)arg0 ;
-(void)incrementSuccessCountForEventType:(id)arg0 ;
-(void)removeAllSamplesForName:(id)arg0 ;


@end


#endif