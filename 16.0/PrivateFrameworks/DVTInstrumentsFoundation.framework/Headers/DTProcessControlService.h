// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTPROCESSCONTROLSERVICE_H
#define DTPROCESSCONTROLSERVICE_H

@class DTXService, NSMutableArray, NSMutableDictionary, NSString;
@protocol DTProcessControlServiceAuthorizedMethods, OS_dispatch_queue;



@interface DTProcessControlService : DTXService <DTProcessControlServiceAuthorizedMethods>

 {
    NSMutableArray *_pids;
    NSMutableArray *_sources;
    NSMutableDictionary *_activeIODispatchSources;
    NSObject<OS_dispatch_queue> *_deathNoteQueue;
    NSObject<OS_dispatch_queue> *_synchronousRedirectionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(id)launchSuspendedProcessWithDevicePath:(id)arg0 bundleIdentifier:(id)arg1 environment:(id)arg2 arguments:(id)arg3 ;
-(id)launchSuspendedProcessWithDevicePath:(id)arg0 bundleIdentifier:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)requestDisableMemoryLimitsForPid:(int)arg0 ;
-(int)cleanupPid:(int)arg0 ;
-(int)maybeRedirectFromFileDescriptor:(int)arg0 fromPid:(int)arg1 withScratchBuffer:(char *)arg2 ofByteLength:(NSUInteger)arg3 ;
-(void)_performMemoryWarningForPid:(int)arg0 ;
-(void)handleRedirectionIterationForFileDescriptor:(int)arg0 forPid:(int)arg1 withDispatchSource:(id)arg2 ;
-(void)killPid:(id)arg0 ;
-(void)resumePid:(id)arg0 ;
-(void)sendProcessControlEvent:(id)arg0 toPid:(id)arg1 ;
-(void)sendSignal:(id)arg0 toPid:(id)arg1 ;
-(void)startObservingPid:(id)arg0 ;
-(void)stopObservingPid:(id)arg0 ;
-(void)suspendPid:(id)arg0 ;
-(void)watchOutputFileDescriptor:(int)arg0 forPid:(int)arg1 ;
-(void)watchOutputFileName:(id)arg0 directory:(id)arg1 forPid:(int)arg2 ;


@end


#endif