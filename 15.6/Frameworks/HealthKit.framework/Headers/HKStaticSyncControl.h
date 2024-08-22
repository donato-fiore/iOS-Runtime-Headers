// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSTATICSYNCCONTROL_H
#define HKSTATICSYNCCONTROL_H

@class NSString;
@protocol _HKXPCExportable, HKStaticSyncControlClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKStaticSyncControl : NSObject <_HKXPCExportable, HKStaticSyncControlClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
// -(void)runStaticSyncExportWithOptions:(NSUInteger)arg0 storeIdentifier:(id)arg1 URL:(id)arg2 batchSize:(NSUInteger)arg3 progressHandler:(id)arg4 completion:(unk)arg5  ;
// -(void)runStaticSyncImportWithOptions:(NSUInteger)arg0 storeIdentifier:(id)arg1 URL:(id)arg2 progressHandler:(id)arg3 completion:(unk)arg4  ;


@end


#endif