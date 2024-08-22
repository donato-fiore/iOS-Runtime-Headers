// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPQLCONNECTION_H
#define BRCPQLCONNECTION_H

@class PQLConnection, br_pacer, NSString;



@interface BRCPQLConnection : PQLConnection {
    br_pacer *_batchingPacer;
    int _changeCount;
    CGFloat _flushInterval;
    BOOL _flushImmediately;
    BOOL _autovacuumInProgress;
    NSInteger _changesOverride;
}


@property (retain, nonatomic) NSString *assertionPersonaIdentifier; // ivar: _assertionPersonaIdentifier
@property (readonly, nonatomic) BOOL isReadonly; // ivar: _isReadonly
@property (copy, nonatomic) id *lockedHandler;
@property (nonatomic) BOOL profilingEnabled;
@property (readonly, nonatomic) NSUInteger vmStepsExecuted; // ivar: _vmStepsExecuted


-(BOOL)_shouldFlushWithChangeCount:(int)arg0 ;
-(BOOL)_validateIsRunningWithCorrectPersona;
-(BOOL)attachDBAtPath:(id)arg0 as:(id)arg1 error:(*id)arg2 ;
-(BOOL)execute:(id)arg0 ;
-(BOOL)execute:(id)arg0 args:(char *)arg1 ;
-(BOOL)executeRaw:(id)arg0 ;
// -(BOOL)executeWithErrorHandler:(id)arg0 sql:(unk)arg1  ;
-(BOOL)executeWithExpectedIndex:(id)arg0 sql:(id)arg1 ;
-(BOOL)executeWithSlowStatementRadar:(id)arg0 sql:(id)arg1 ;
-(BOOL)needsAutovacuum;
-(BOOL)openAtURL:(id)arg0 withFlags:(int)arg1 error:(*id)arg2 ;
-(NSInteger)changes;
-(NSInteger)sizeInBytes;
-(id)fetch:(id)arg0 ;
-(id)fetch:(id)arg0 args:(char *)arg1 ;
// -(id)fetchObject:(id)arg0 sql:(unk)arg1  ;
// -(id)fetchObject:(id)arg0 sql:(unk)arg1 args:(id)arg2  ;
-(id)fetchObjectOfClass:(Class)arg0 initializer:(SEL)arg1 sql:(id)arg2 ;
-(id)fetchObjectOfClass:(Class)arg0 initializer:(SEL)arg1 sql:(id)arg2 args:(char *)arg3 ;
-(id)fetchObjectOfClass:(Class)arg0 sql:(id)arg1 ;
-(id)fetchObjectOfClass:(Class)arg0 sql:(id)arg1 args:(char *)arg2 ;
-(id)fetchWithSlowStatementRadar:(id)arg0 objectOfClass:(Class)arg1 sql:(id)arg2 ;
-(id)fetchWithSlowStatementRadar:(id)arg0 sql:(id)arg1 ;
-(id)init;
-(id)initWithLabel:(id)arg0 dbCorruptionHandler:(id)arg1 ;
-(void)_setErrorHandlerWithDBCorruptionHandler:(id)arg0 ;
-(void)assertOnQueue;
-(void)autovacuumIfNeeded;
-(void)brc_close;
-(void)brc_closeCrashingOnFailure:(BOOL)arg0 ;
-(void)disableProfilingForQueriesInBlock:(id)arg0 ;
-(void)flushToMakeEditsVisibleToIPCReaders;
-(void)setProfilingHook:(id)arg0 ;
-(void)usePacedBatchingOnTargetQueue:(id)arg0 withInterval:(CGFloat)arg1 changeCount:(int)arg2 ;


@end


#endif