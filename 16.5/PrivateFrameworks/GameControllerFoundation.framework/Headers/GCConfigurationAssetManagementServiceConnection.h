// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCONFIGURATIONASSETMANAGEMENTSERVICECONNECTION_H
#define GCCONFIGURATIONASSETMANAGEMENTSERVICECONNECTION_H

@class NSString;
@protocol GCConfigurationAssetManagementService;


#import "GCConfigXPCServiceServiceConnection.h"

@interface GCConfigurationAssetManagementServiceConnection : GCConfigXPCServiceServiceConnection <GCConfigurationAssetManagementService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceProtocol;
-(id)assets;
-(id)checkForNewAssets:(BOOL)arg0 forceCatalogRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(id)currentAsset:(BOOL)arg0 ;
-(id)lastUpdateDate;


@end


#endif