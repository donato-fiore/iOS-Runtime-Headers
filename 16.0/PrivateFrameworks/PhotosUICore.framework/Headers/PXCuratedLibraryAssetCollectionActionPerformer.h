// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYASSETCOLLECTIONACTIONPERFORMER_H
#define PXCURATEDLIBRARYASSETCOLLECTIONACTIONPERFORMER_H



#import "PXCuratedLibraryActionPerformer.h"
#import "PXAssetCollectionReference.h"

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference


-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 ;
-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performActionWithCompletionHandler:(id)arg0 ;


@end


#endif