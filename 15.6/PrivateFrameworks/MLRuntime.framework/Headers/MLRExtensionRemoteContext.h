// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLREXTENSIONREMOTECONTEXT_H
#define MLREXTENSIONREMOTECONTEXT_H

@class NSExtensionContext, NSString;
@protocol MLRExtensionRemoteProtocol, OS_dispatch_queue, MLRTaskPerforming, OS_os_transaction;



@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol>

 {
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
    NSObject<OS_dispatch_queue> *_stopQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MLRTaskPerforming> *plugin; // ivar: _plugin
@property (retain, nonatomic) NSObject<OS_os_transaction> *stopTransaction; // ivar: _stopTransaction
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *taskTransaction; // ivar: _taskTransaction


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(void)initialize;
-(BOOL)loadPluginIfNecessaryWithError:(*id)arg0 ;
-(id)createDodMLServer;
-(id)createMLRTrialTaskWithTask:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 plugin:(id)arg3 ;
-(id)initWithPlugin:(id)arg0 ;
-(id)privatizeAndEncryptInplace:(id)arg0 forRecipe:(id)arg1 error:(*id)arg2 ;
-(id)processTaskResult:(id)arg0 forTask:(id)arg1 duration:(CGFloat)arg2 error:(*id)arg3 ;
-(id)writeBinaryDataAndReturnURL:(id)arg0 error:(*id)arg1 ;
-(void)performDodMLTask:(id)arg0 sandBoxExtensions:(id)arg1 completion:(id)arg2 ;
-(void)performSynchronouslyDodMLTask:(id)arg0 sandBoxExtensions:(id)arg1 completion:(id)arg2 ;
-(void)performSynchronouslyTrialTask:(id)arg0 completion:(id)arg1 ;
-(void)performTrialTask:(id)arg0 completion:(id)arg1 ;
-(void)simulateCrash;
-(void)stop;
-(void)stopSynchronously;


@end


#endif