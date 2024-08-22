// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPERSONDATASOURCE_H
#define PXPEOPLEPERSONDATASOURCE_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol PHPhotoLibraryChangeObserver;


#import "PXPeopleDataSource.h"
#import "PXPeopleFaceTileImageManager.h"

@interface PXPeoplePersonDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>

 {
    PXPeopleFaceTileImageManager *_imageManager;
    NSMutableDictionary *_keyFaceByPersonLocalIdentifier;
    NSDictionary *_assetsByFaces;
    BOOL _showUUIDIfNoName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPeopleFaceTileImageManager *imageManager;
@property (nonatomic) NSUInteger personFetchType; // ivar: _personFetchType
@property (readonly) Class superclass;


-(NSInteger)_personTypeForFetchType:(NSUInteger)arg0 ;
-(id)_applyChanges:(id)arg0 ;
-(id)_assetForFace:(id)arg0 ;
-(id)_faceForPerson:(id)arg0 ;
-(id)_fetchResultForFetchType:(NSUInteger)arg0 fetchOptions:(id)arg1 ;
-(id)_itemsArrayFromObjects:(id)arg0 ;
-(id)_membersForModelObjects:(id)arg0 ;
-(id)faceTileAtIndex:(NSInteger)arg0 ;
-(id)generateFetchResult;
-(id)initWithName:(id)arg0 personFetchType:(NSUInteger)arg1 ;
-(id)initWithName:(id)arg0 personFetchType:(NSUInteger)arg1 fetchLimit:(NSUInteger)arg2 ;
-(id)titleAtIndex:(NSUInteger)arg0 ;
-(void)_asyncLoadImageForItem:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
// -(void)_asyncLoadImageForItem:(id)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 fastDisplayBlock:(unk)arg3  ;
-(void)_cacheFacesAndAssets;
-(void)cancelImageLoadingForItem:(id)arg0 ;
-(void)loadObjectsAndUpdateMembersWithCompletion:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;
-(void)updateKeyFace:(id)arg0 forPerson:(id)arg1 ;


@end


#endif