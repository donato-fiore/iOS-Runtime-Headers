// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFSEVENTAGENT_H
#define PLFSEVENTAGENT_H

@class PLAgent, PLXPCResponderOperatorComposition;



@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder; // ivar: _fileListResponder
@property *__FSEventStream stream; // ivar: _stream


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)addLogFileNameEntry:(BOOL)arg0 withType:(id)arg1 withName:(id)arg2 ;
-(void)dealloc;
-(void)initOperatorDependancies;
-(void)logLogFileName:(id)arg0 withName:(id)arg1 ;
-(void)registerforFSEventNotification;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif