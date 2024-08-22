// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXNAVIGATIONLISTDISPLAYASSETCOLLECTIONITEM_H
#define PXNAVIGATIONLISTDISPLAYASSETCOLLECTIONITEM_H

@protocol PXDisplayAssetCollection;


#import "PXNavigationListItem.h"

@interface PXNavigationListDisplayAssetCollectionItem : PXNavigationListItem {
    BOOL _renamable;
    BOOL _deletable;
}


@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *collection; // ivar: _collection
@property (nonatomic, getter=isDraggable) BOOL draggable; // ivar: _draggable
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (nonatomic, getter=isReorderable) BOOL reorderable; // ivar: _reorderable


-(BOOL)isDeletable;
-(BOOL)isRenamable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)glyphImageName;
-(id)imageNameForIdentifier;
-(id)representedObject;


@end


#endif