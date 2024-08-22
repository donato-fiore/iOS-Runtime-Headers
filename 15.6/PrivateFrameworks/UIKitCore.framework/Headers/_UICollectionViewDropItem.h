// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWDROPITEM_H
#define _UICOLLECTIONVIEWDROPITEM_H

@class NSString, NSIndexPath;
@protocol _UICollectionViewDropItem;

#import <Foundation/Foundation.h>

#import "UIDragItem.h"

@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragItem *dragItem; // ivar: _dragItem
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize previewSize; // ivar: _previewSize
@property (retain, nonatomic) NSIndexPath *sourceIndexPath; // ivar: _sourceIndexPath
@property (readonly) Class superclass;


-(id)initWithDragItem:(id)arg0 previewSize:(struct CGSize )arg1 sourceIndexPath:(id)arg2 ;


@end


#endif