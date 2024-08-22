// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEVIRTUALCLIENT_H
#define _ANEVIRTUALCLIENT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ANEVirtualClient : NSObject

@property (readonly, nonatomic) unsigned int connect; // ivar: _connect
@property (retain, nonatomic) NSString *hostBuildVersion; // ivar: _hostBuildVersion
@property (nonatomic) NSUInteger hostCapabilityMask; // ivar: _hostCapabilityMask
@property (nonatomic) unsigned int hostDataInterfaceVersion; // ivar: _hostDataInterfaceVersion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)new;
+(id)sharedConnection;
-(?)copyErrorValue;
-(?)copyModel:(?)arg0 optionsvmData;
-(?)copyModelOptionFiles:(?)arg0 optionsvmData;
-(?)copyOptionsvmData;
-(?)releaseIOSurfaces;
-(?)updateErrorerror;
-(BOOL)beginRealTimeTask;
-(BOOL)callIOUserClient:(unsigned int)arg0 inParams:(struct VirtANEModel *)arg1 outParams:(struct VirtANEModel *)arg2 ;
-(BOOL)compileModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)compiledModelExistsFor:(id)arg0 ;
-(BOOL)compiledModelExistsMatchingHash:(id)arg0 ;
-(BOOL)doEvaluateWithModel:(id)arg0 options:(id)arg1 request:(id)arg2 qos:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)doMapIOSurfacesWithModel:(id)arg0 request:(id)arg1 cacheInference:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)echo:(id)arg0 ;
-(BOOL)endRealTimeTask;
-(BOOL)evaluateWithModel:(id)arg0 options:(id)arg1 request:(id)arg2 qos:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)hasANE;
-(BOOL)loadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)mapIOSurfacesWithModel:(id)arg0 request:(id)arg1 cacheInference:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)unloadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(NSInteger)aneBoardtype;
-(id)doJsonParsingMatchWeightName:(id)arg0 ;
-(id)getModelAttribute:(struct VMData *)arg0 ;
-(id)init;
-(id)initWithSingletonAccess;
-(id)parallelDecompressedData:(id)arg0 ;
-(id)readWeightFilename:(id)arg0 ;
-(id)updatePerformanceStats:(struct VMData *)arg0 ;
-(struct __IOSurface *)copyToIOSurface:(id)arg0 length:(NSUInteger)arg1 ioSID:(*unsigned int)arg2 ;
-(void)checkKernReturnValue:(int)arg0 selector:(unsigned int)arg1 outParams:(struct VirtANEModel *)arg2 ;
-(void)dealloc;
-(void)exchangeBuildVersionInfo;
-(void)purgeCompiledModel:(id)arg0 ;
-(void)purgeCompiledModelMatchingHash:(id)arg0 ;
-(void)sendGuestBuildVersion;


@end


#endif