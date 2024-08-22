// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXASSETSSERVICE_H
#define AXASSETSSERVICE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}




-(id)_serviceProxy;
-(id)init;
-(id)xpcConnection;
-(void)_destroyXPCConnection;
-(void)dealloc;
-(void)deleteCompactResourceIfNeededForIdentifier:(id)arg0 ;
-(void)informSiriVoiceSubscriptionsWithVoiceId:(id)arg0 addition:(BOOL)arg1 ;
-(void)refreshAssetCatalogForPolicy:(id)arg0 withOverrideTimeout:(id)arg1 forceCatalogRefresh:(BOOL)arg2 ;
-(void)restartTTSResourceMigration;
-(void)runFirstBootTasks:(BOOL)arg0 ;
-(void)updateAssetForPolicy:(id)arg0 ;
-(void)updateTTSResourcesForActionType:(NSUInteger)arg0 ;


@end


#endif