// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSMOBILEASSETCONTROLLER_H
#define WBSMOBILEASSETCONTROLLER_H

@class WBSPeriodicActivityScheduler, NSString, NSDate;
@protocol WBSMobileAssetControllerProtocol, OS_dispatch_queue, WBSMobileAssetControllerDelegate;

#import <Foundation/Foundation.h>


@interface WBSMobileAssetController : NSObject <WBSMobileAssetControllerProtocol>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSPeriodicActivityScheduler *_scheduler;
}


@property (readonly, copy, nonatomic) NSString *assetType; // ivar: _assetType
@property (weak) NSObject<WBSMobileAssetControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (readonly, copy, nonatomic) NSString *updateDateDefaultsKey; // ivar: _updateDateDefaultsKey
@property (readonly, nonatomic) CGFloat updateInterval; // ivar: _updateInterval


-(id)initWithMobileAssetType:(id)arg0 updateDateDefaultsKey:(id)arg1 updateInterval:(CGFloat)arg2 minimumDelay:(CGFloat)arg3 ;
-(id)initWithMobileAssetType:(id)arg0 updateInterval:(CGFloat)arg1 minimumDelay:(CGFloat)arg2 ;
-(void)_downloadIfNecessary:(id)arg0 ;
-(void)_queryAssets:(id)arg0 ;
-(void)_queryMostRecentAsset:(id)arg0 ;
-(void)_update;
-(void)_updateCatalog:(id)arg0 ;
-(void)queryURL:(id)arg0 ;


@end


#endif