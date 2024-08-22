// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOLLECTIONLISTACTIONPERFORMER_H
#define PXCOLLECTIONLISTACTIONPERFORMER_H

@class PHCollectionList, PHCollection;
@protocol PXSelectionContainerProvider;


#import "PXActionPerformer.h"

@interface PXCollectionListActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PHCollectionList *collectionList; // ivar: _collectionList
@property (retain, nonatomic) PHCollection *createdCollection; // ivar: _createdCollection
@property (readonly, nonatomic) NSObject<PXSelectionContainerProvider> *selectionProvider; // ivar: _selectionProvider


+(BOOL)canPerformActionForCollectionList:(id)arg0 ;
+(id)localizedTitleForActionType:(id)arg0 ;
+(id)localizedTitleForActionType:(id)arg0 selectionProvider:(id)arg1 ;
-(id)initWithActionType:(id)arg0 collectionList:(id)arg1 selectionProvider:(id)arg2 ;
-(void)createAlbumWithAssets:(id)arg0 albumTitle:(id)arg1 ;
-(void)handleCreateSharedAlbum;
-(void)performUserInteractionTask;
-(void)presentSetupUIForAlbumCreationWithCompletionHandler:(id)arg0 ;


@end


#endif