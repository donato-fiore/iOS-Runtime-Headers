// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCREATEASSETCOLLECTIONACTION_H
#define PXCREATEASSETCOLLECTIONACTION_H

@class PHAssetCollection, NSString, PHCollectionList, NSArray;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"
#import "PXContentSyndicationPhotoKitAssetGroup.h"

@interface PXCreateAssetCollectionAction : PXPhotosAction

@property (readonly, nonatomic) PXContentSyndicationPhotoKitAssetGroup *assetGroup; // ivar: _assetGroup
@property (readonly, nonatomic) PHAssetCollection *createdAssetCollection; // ivar: _createdAssetCollection
@property (copy, nonatomic) NSString *createdCollectionIdentifier; // ivar: _createdCollectionIdentifier
@property (readonly, nonatomic) PHCollectionList *parentCollectionList; // ivar: _parentCollectionList
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *selectedAssets; // ivar: _selectedAssets
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets;


+(void)_donateTipsAppAlbumCreationSignal;
-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithTitle:(id)arg0 parentCollectionList:(id)arg1 selectedAssets:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif