// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSTREAMINPUTMANAGER_H
#define VCSTREAMINPUTMANAGER_H

@class NSMutableDictionary, NSString;
@protocol VCStreamInputDelegate, OS_dispatch_queue;


#import "VCObject.h"

@interface VCStreamInputManager : VCObject <VCStreamInputDelegate>

 {
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_streamInputQueue;
    NSMutableDictionary *_streamInputs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)clientProcessDiedWithXPCArguments:(id)arg0 result:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getServerPidWithXPCArguments:(id)arg0 result:(*id)arg1 error:(*id)arg2 ;
-(BOOL)initializeStreamInputWithXPCArguments:(id)arg0 result:(*id)arg1 error:(*id)arg2 ;
-(BOOL)pushSampleBufferWithXPCArguments:(id)arg0 result:(*id)arg1 error:(*id)arg2 ;
-(BOOL)terminateStreamInputWithXPCArguments:(id)arg0 result:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)retainCount;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newStreamInputID;
-(id)retain;
-(id)streamInputWithID:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)didResumeStreamInput:(id)arg0 ;
-(void)didStartStreamInput:(id)arg0 ;
-(void)didStopStreamInput:(id)arg0 ;
-(void)didSuspendStreamInput:(id)arg0 ;
-(void)registerBlocksForService;
-(void)registerDidClientDieBlock:(id)arg0 ;
-(void)registerService:(char *)arg0 weakSelf:(id)arg1 block:(id)arg2 ;
-(void)registerService:(char *)arg0 weakSelf:(id)arg1 eventLogLevel:(int)arg2 block:(id)arg3 ;
-(void)release;


@end


#endif