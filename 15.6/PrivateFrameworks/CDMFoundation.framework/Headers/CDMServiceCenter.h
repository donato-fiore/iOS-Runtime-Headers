// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSERVICECENTER_H
#define CDMSERVICECENTER_H

@class NSArray, NSMutableDictionary, NSString;
@protocol CDMServiceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CDMConfig.h"
#import "CDMComposerService.h"
#import "CDMServiceGraphRunner.h"
#import "CDMAssetsManager.h"
#import "CDMDynamicConfig.h"

@interface CDMServiceCenter : NSObject <CDMServiceObserver>

 {
    CDMConfig *_config;
    NSArray *_services;
    NSArray *_dagServices;
    NSArray *_enabledDAGServices;
    NSArray *_foundationServices;
    CDMComposerService *_composerService;
    NSMutableDictionary *_commandServicesDict;
    id *_defaultCallback;
    int _maxSetupRetry;
    CDMServiceGraphRunner *_serviceGraphRunner;
    CDMAssetsManager *_cdmAssetsManager;
    NSObject<OS_dispatch_queue> *_cdmServiceSetupQueue;
    CDMDynamicConfig *_currentConfig;
    BOOL _enableSetAssetsProvisionalAndPromote;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger systemState; // ivar: _systemState


+(BOOL)isOnMainQueue;
-(BOOL)areAssetsAvailable:(id)arg0 ;
-(BOOL)isServiceNotReady:(id)arg0 withServiceStateMap:(id)arg1 ;
-(BOOL)promoteAssetsWithServiceState:(id)arg0 ;
-(BOOL)registerWithAssetsDelegate:(id)arg0 ;
-(BOOL)setAssetsProvisional;
-(BOOL)setupAssets;
-(BOOL)shouldCDMAssetManagerReSetup;
-(id)getAssetPaths;
-(id)getEnabledServices:(id)arg0 ;
-(id)getServices;
-(void)cleanup;
-(void)dealloc;
-(void)handleCommand:(id)arg0 forCallback:(id)arg1 ;
-(void)handleSetup:(id)arg0 forCallback:(id)arg1 ;
-(void)mergeConfig:(id)arg0 ;
-(void)setupWithConfig:(id)arg0 ;
-(void)smService:(id)arg0 didPublishCommand:(id)arg1 ;
-(void)smService:(id)arg0 didPublishRequest:(id)arg1 withResponseCallback:(id)arg2 ;


@end


#endif