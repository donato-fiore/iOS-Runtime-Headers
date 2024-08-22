// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONASSETSAVINGHELPER_H
#define PXCONTENTSYNDICATIONASSETSAVINGHELPER_H

@class NSArray;
@protocol PXDisplayAssetCollection, PXPresentationEnvironment;

#import <Foundation/Foundation.h>


@interface PXContentSyndicationAssetSavingHelper : NSObject

@property (nonatomic) BOOL allowSkippingUnsavedAssets; // ivar: _allowSkippingUnsavedAssets
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSObject<PXPresentationEnvironment> *presentationEnvironment; // ivar: _presentationEnvironment
@property (nonatomic) BOOL skipUserPromptForSavingAssets; // ivar: _skipUserPromptForSavingAssets
@property (readonly, nonatomic) NSArray *unsavedAssetsToSkip; // ivar: _unsavedAssetsToSkip
@property (nonatomic) BOOL userCanContinueAfterSavingSyndicatedAssets; // ivar: _userCanContinueAfterSavingSyndicatedAssets


+(id)assetSavingHelperFromAssetCollectionActionPerformer:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 ;
-(void)performSaveActionIfNeededOnUnsavedSyndicatedAssetsWithCompletion:(id)arg0 ;
-(void)presentSaveAlertForUnsavedSyndicatedAssets:(id)arg0 canContinueAfterSaving:(BOOL)arg1 allowSkippingUnsavedAssets:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)saveUnsavedSyndicatedAssetsWithCompletion:(id)arg0 ;


@end


#endif