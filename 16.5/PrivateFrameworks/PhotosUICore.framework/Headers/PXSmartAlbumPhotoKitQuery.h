// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSMARTALBUMPHOTOKITQUERY_H
#define PXSMARTALBUMPHOTOKITQUERY_H

@class PHAssetCollection, PHCollectionList, PHPhotoLibrary, PLQuery, NSArray, NSString;
@protocol PXSmartAlbumConditionDelegate, PXFetchResultCountObserverDelegate, PXSmartAlbumQuery, PXSmartAlbumQueryDelegate;

#import <Foundation/Foundation.h>

#import "PXSmartAlbumPhotoKitEditingContext.h"
#import "PXFetchResultCountObserver.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumPhotoKitQuery : NSObject <PXSmartAlbumConditionDelegate, PXFetchResultCountObserverDelegate, PXSmartAlbumQuery>

 {
    PHAssetCollection *_albumToEdit;
    PHCollectionList *_collectionList;
    PHPhotoLibrary *_photoLibrary;
    PXSmartAlbumPhotoKitEditingContext *_editingContext;
    PLQuery *_query;
    PXFetchResultCountObserver *_fetchResultCountObserver;
}


@property (nonatomic) BOOL canPersistChanges; // ivar: _canPersistChanges
@property (retain, nonatomic) NSArray *conditions; // ivar: _conditions
@property (retain, nonatomic) PXLabeledValue *conjunctionValue; // ivar: _conjunctionValue
@property (readonly, nonatomic) NSArray *conjunctionValues; // ivar: _conjunctionValues
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSmartAlbumQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)queryWithSmartAlbum:(id)arg0 collectionList:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
+(void)_createSmartAlbumWithTitle:(id)arg0 inCollectionList:(id)arg1 query:(id)arg2 photoLibrary:(id)arg3 completionHandler:(id)arg4 ;
+(void)_editSmartAlbum:(id)arg0 title:(id)arg1 query:(id)arg2 completionHandler:(id)arg3 ;
-(id)_initWithSmartAlbum:(id)arg0 collectionList:(id)arg1 photoLibrary:(id)arg2 query:(id)arg3 editingContext:(id)arg4 conditions:(id)arg5 ;
-(id)addNewConditionAfterCondition:(id)arg0 ;
-(id)init;
-(id)replaceCondition:(id)arg0 withConditionOfType:(NSInteger)arg1 ;
-(void)_updateCanPersistChanges;
-(void)_updateFetchResultCountObserver;
-(void)_updateQueryFromConditions;
-(void)_updateStatusString;
-(void)conditionDidChange:(id)arg0 ;
-(void)fetchResultCountObserver:(id)arg0 didChangeFetchResultCount:(NSInteger)arg1 ;
-(void)persistChangesWithCompletion:(id)arg0 ;
-(void)removeCondition:(id)arg0 ;


@end


#endif