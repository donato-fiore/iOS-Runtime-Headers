// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSDVOICETRIGGERASSETMANAGER_H
#define AXSDVOICETRIGGERASSETMANAGER_H

@class AXAssetController, AXVoiceTriggerAssetPolicy, NSString, AXAsset;
@protocol AXAssetControllerObserver, AXSDVoiceTriggerAssetManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSDVoiceTriggerAssetManager : NSObject <AXAssetControllerObserver>



@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (retain, nonatomic) AXVoiceTriggerAssetPolicy *assetPolicy; // ivar: _assetPolicy
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDVoiceTriggerAssetManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXAsset *latestDownloadedAsset; // ivar: _latestDownloadedAsset
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetDidUpdateWithError:(id)arg0 ;


@end


#endif