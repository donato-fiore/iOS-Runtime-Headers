// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYELLIPSISBUTTONACTIONPERFORMER_H
#define PXCURATEDLIBRARYELLIPSISBUTTONACTIONPERFORMER_H

@protocol PXCuratedLibraryLayoutAssetCollectionReferenceProvider;


#import "PXCuratedLibraryAssetCollectionActionPerformer.h"
#import "PXCuratedLibraryActionManager.h"
#import "PXGLayout.h"

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSObject<PXCuratedLibraryLayoutAssetCollectionReferenceProvider> *assetCollectionReferenceProvider; // ivar: _assetCollectionReferenceProvider
@property (weak, nonatomic) PXGLayout *layout; // ivar: _layout


-(BOOL)performerResetsAfterCompletion;
-(BOOL)presentsMenu;
-(id)assetCollectionReference;
-(id)buttonSpriteReference;
-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)initWithViewModel:(id)arg0 assetCollectionReference:(id)arg1 actionManager:(id)arg2 ;
-(id)initWithViewModel:(id)arg0 assetCollectionReferenceProvider:(id)arg1 actionManager:(id)arg2 ;
-(void)_presentToUserOptionsFromActionPerformers:(id)arg0 forAssetCollectionReference:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif