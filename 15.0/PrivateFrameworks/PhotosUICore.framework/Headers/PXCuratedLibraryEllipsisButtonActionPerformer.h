// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYELLIPSISBUTTONACTIONPERFORMER_H
#define PXCURATEDLIBRARYELLIPSISBUTTONACTIONPERFORMER_H



#import "PXCuratedLibraryAssetCollectionActionPerformer.h"
#import "PXCuratedLibraryActionManager.h"
#import "PXGLayout.h"

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // ivar: _actionManager
@property (weak, nonatomic) PXGLayout *layout; // ivar: _layout


-(BOOL)performerResetsAfterCompletion;
-(BOOL)presentsMenu;
-(id)buttonSpriteReference;
-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)initWithViewModel:(id)arg0 assetCollectionReference:(id)arg1 actionManager:(id)arg2 ;
-(void)_presentToUserOptionsFromActionPerformers:(id)arg0 forAssetCollectionReference:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif