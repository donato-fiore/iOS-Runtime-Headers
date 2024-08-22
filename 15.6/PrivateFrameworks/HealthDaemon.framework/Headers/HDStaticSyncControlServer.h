// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSTATICSYNCCONTROLSERVER_H
#define HDSTATICSYNCCONTROLSERVER_H

@class NSString;
@protocol HKStaticSyncControlServer;


#import "HDStandardTaskServer.h"

@interface HDStaticSyncControlServer : HDStandardTaskServer <HKStaticSyncControlServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)remote_runStaticSyncExportWithOptions:(NSUInteger)arg0 storeIdentifier:(id)arg1 URL:(id)arg2 batchSize:(NSUInteger)arg3 completion:(id)arg4 ;
-(id)remote_runStaticSyncImportWithOptions:(NSUInteger)arg0 storeIdentifier:(id)arg1 URL:(id)arg2 completion:(id)arg3 ;


@end


#endif