// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIALLOCATIONSTATUSDEFAULTPROVIDER_H
#define TRIALLOCATIONSTATUSDEFAULTPROVIDER_H

@class _PASXPCClientHelper, _PASLock;
@protocol TRIAllocationStatusProvider;

#import <Foundation/Foundation.h>


@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider>

 {
    _PASXPCClientHelper *_clientHelper;
    _PASXPCClientHelper *_internalHelper;
    _PASLock *_lock;
}




-(BOOL)enumerateActiveExperimentsForEnvironment:(int)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)enumerateActiveRolloutsWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)enumerateSampledActiveExperimentsForEnvironment:(int)arg0 correlationID:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)enumerateSampledActiveRolloutsForCorrelationID:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)removeUpdateHandlerForToken:(id)arg0 ;
-(id)_defaultQueue;
-(id)activeExperimentInformationWithError:(*id)arg0 ;
-(id)addStatusUpdateHandlerForEnvironment:(int)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)enumerateExperimentStatusesForEnvironment:(int)arg0 startingFromCursor:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(id)init;
-(id)syncProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif