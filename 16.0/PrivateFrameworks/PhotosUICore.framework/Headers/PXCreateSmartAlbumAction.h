// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCREATESMARTALBUMACTION_H
#define PXCREATESMARTALBUMACTION_H

@class PHAssetCollection, NSString, PHCollectionList;


#import "PXPhotosAction.h"

@interface PXCreateSmartAlbumAction : PXPhotosAction

@property (readonly, nonatomic) PHAssetCollection *createdAssetCollection; // ivar: _createdAssetCollection
@property (copy, nonatomic) NSString *createdCollectionIdentifier; // ivar: _createdCollectionIdentifier
@property (readonly, nonatomic) PHCollectionList *parentCollectionList; // ivar: _parentCollectionList
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithTitle:(id)arg0 parentCollectionList:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif