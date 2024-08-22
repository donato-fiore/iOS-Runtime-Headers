// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPHOENIXASSETMONITOR_H
#define AXPHOENIXASSETMONITOR_H

@class AXAssetController, NSString, AXAsset;
@protocol AXAssetControllerObserver, AXPhoenixAssetMonitorDelegate;

#import <Foundation/Foundation.h>

#import "AXPhoenixAssetPolicy.h"

@interface AXPhoenixAssetMonitor : NSObject <AXAssetControllerObserver>



@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (retain, nonatomic) AXPhoenixAssetPolicy *assetPolicy; // ivar: _assetPolicy
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXPhoenixAssetMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXAsset *latestAsset; // ivar: _latestAsset
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetDidUpdate;


@end


#endif