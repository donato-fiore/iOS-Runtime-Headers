// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDUPLICATEASSETSACTION_H
#define PXDUPLICATEASSETSACTION_H

@class NSMutableArray, NSArray, PHFetchResult, NSProgress;


#import "PXAssetsSelectionAction.h"

@interface PXDuplicateAssetsAction : PXAssetsSelectionAction {
    NSMutableArray *_originalAssets;
    NSInteger _assetCount;
    BOOL _didCheckDuplicateCapabilities;
    BOOL _canExtractStill;
    NSArray *_createdAssetLocalIdentifiers;
    PHFetchResult *_createdAssets;
}


@property (retain, nonatomic) NSProgress *actionProgress; // ivar: _actionProgress
@property (readonly, nonatomic) BOOL canExtractStill;
@property (readonly, nonatomic) PHFetchResult *createdAssets;
@property (copy, nonatomic) id *downloadCompletionHandler; // ivar: _downloadCompletionHandler
@property (nonatomic) BOOL duplicatesAsStill; // ivar: _duplicatesAsStill
@property (nonatomic) BOOL duplicatesOriginal; // ivar: _duplicatesOriginal
@property (nonatomic) ? stillImageTime; // ivar: _stillImageTime


+(BOOL)canPerformOnAllAssets:(id)arg0 ;
+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(NSInteger)assetCount;
-(id)actionNameLocalizationKey;
-(id)initWithSelectionSnapshot:(id)arg0 ;
-(void)_checkDuplicateCapabilities;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif