// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTASSETPROVIDERSERVICE_H
#define DTASSETPROVIDERSERVICE_H

@class DTXService, DTXConnection, NSString;
@protocol OS_dispatch_queue;



@interface DTAssetProviderService : DTXService

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentRequestQueue; // ivar: _concurrentRequestQueue
@property (weak, nonatomic) DTXConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSString *workingDirectory; // ivar: _workingDirectory


+(BOOL)shouldStartAssetServerForApplication:(id)arg0 ;
+(id)assetManifestPathForApplication:(id)arg0 ;
+(void)assetProviderWithConnection:(id)arg0 workingDirectory:(id)arg1 completion:(id)arg2 ;
+(void)beginProvidingAssetsForApplication:(id)arg0 onChannel:(id)arg1 completion:(id)arg2 ;
+(void)beginProvidingAssetsForLocalApplication:(id)arg0 connection:(id)arg1 completion:(id)arg2 ;
+(void)beginProvidingAssetsForRemoteApplication:(id)arg0 workingDirectory:(id)arg1 connection:(id)arg2 completion:(id)arg3 ;
-(BOOL)_requestedPath:(id)arg0 belongsToWorkingDirectory:(id)arg1 ;
-(BOOL)_serveData:(id)arg0 usingChannel:(id)arg1 forRequestIdentifier:(id)arg2 checkForCancellation:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)hasCancelledRequestWithIdentifier:(id)arg0 onChannel:(id)arg1 ;
-(BOOL)serveDataFromFileHandle:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(BOOL)serveDataWithResultFromZippedDirectory:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(id)_bestChannelForRequestWithIdentifier:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)_completeResponseOnChannel:(id)arg0 withIdentifier:(id)arg1 ;
-(void)messageReceived:(id)arg0 ;
-(void)registerManifestForApplicationAtPath:(id)arg0 onPort:(NSUInteger)arg1 ;
-(void)serveDataFromFile:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(void)serveDataFromZippedDirectory:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(void)startServerOnDeviceWithCompletion:(id)arg0 ;
-(void)startServingAssetsForAppWithPath:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif