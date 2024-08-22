// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONFIGURATIONASSETMANAGEMENTSERVICEXPCPROXY_H
#define GCCONFIGURATIONASSETMANAGEMENTSERVICEXPCPROXY_H

@protocol GCConfigurationAssetManagementServiceXPCInterface, GCConfigurationAssetManagementService;

#import <Foundation/Foundation.h>


@interface GCConfigurationAssetManagementServiceXPCProxy : NSObject <GCConfigurationAssetManagementServiceXPCInterface>

 {
    id<GCConfigurationAssetManagementService> *_service;
}




-(id)checkForNewAssets:(BOOL)arg0 forceCatalogRefresh:(BOOL)arg1 reply:(id)arg2 ;
-(id)init;
-(id)initWithService:(id)arg0 ;
-(void)assetsWithReply:(id)arg0 ;
-(void)currentAsset:(BOOL)arg0 withReply:(id)arg1 ;
-(void)lastUpdateDateWithReply:(id)arg0 ;


@end


#endif