// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRITASKAGGREGATIONSTATISTICS_H
#define BMSIRITASKAGGREGATIONSTATISTICS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriTaskAggregationStatistics : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int cancelledSystemTasks; // ivar: _cancelledSystemTasks
@property (readonly, nonatomic) unsigned int completedSystemTasks; // ivar: _completedSystemTasks
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int failedSystemTasks; // ivar: _failedSystemTasks
@property (nonatomic) BOOL hasCancelledSystemTasks; // ivar: _hasCancelledSystemTasks
@property (nonatomic) BOOL hasCompletedSystemTasks; // ivar: _hasCompletedSystemTasks
@property (nonatomic) BOOL hasFailedSystemTasks; // ivar: _hasFailedSystemTasks
@property (nonatomic) BOOL hasTasksPerformedWithUI; // ivar: _hasTasksPerformedWithUI
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int tasksPerformedWithUI; // ivar: _tasksPerformedWithUI


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithCompletedSystemTasks:(id)arg0 failedSystemTasks:(id)arg1 cancelledSystemTasks:(id)arg2 tasksPerformedWithUI:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif