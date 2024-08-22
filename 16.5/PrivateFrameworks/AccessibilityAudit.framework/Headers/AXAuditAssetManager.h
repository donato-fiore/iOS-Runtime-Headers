// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITASSETMANAGER_H
#define AXAUDITASSETMANAGER_H

@class NSArray, AXElementVisionModelAssetPolicy, AXIconVisionModelAssetPolicy, NSString;
@protocol AXAssetControllerObserver;

#import <Foundation/Foundation.h>


@interface AXAuditAssetManager : NSObject <AXAssetControllerObserver>



@property (retain, nonatomic) NSArray *_assetControllers; // ivar: __assetControllers
@property (retain, nonatomic) AXElementVisionModelAssetPolicy *_elementVisionModelAssetPolicy; // ivar: __elementVisionModelAssetPolicy
@property (retain, nonatomic) AXIconVisionModelAssetPolicy *_iconVisionModelAssetPolicy; // ivar: __iconVisionModelAssetPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(id)init;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)downloadAssetsIfNecessary;


@end


#endif