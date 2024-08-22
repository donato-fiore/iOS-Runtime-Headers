// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWDROPCOORDINATORITEM_H
#define _UICOLLECTIONVIEWDROPCOORDINATORITEM_H

@class NSString, NSIndexPath;
@protocol UIDragAnimating;

#import <Foundation/Foundation.h>

#import "_UIDropAnimationHandlers.h"
#import "UIDragItem.h"
#import "UIDragPreviewTarget.h"

@interface _UICollectionViewDropCoordinatorItem : NSObject <UIDragAnimating>



@property (retain, nonatomic) _UIDropAnimationHandlers *animationHandlers; // ivar: _animationHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSIndexPath *destinationIndexPath; // ivar: _destinationIndexPath
@property (weak, nonatomic) UIDragItem *dragItem; // ivar: _dragItem
@property (readonly) NSUInteger hash;
@property (nonatomic) int kind; // ivar: _kind
@property (copy, nonatomic) id *previewParametersProvider; // ivar: _previewParametersProvider
@property (nonatomic) BOOL shouldRemainInHierarchy; // ivar: _shouldRemainInHierarchy
@property (readonly) Class superclass;
@property (copy, nonatomic) UIDragPreviewTarget *target; // ivar: _target


-(id)initWithDestinationIndexPath:(id)arg0 dragItem:(id)arg1 ;
-(id)initWithDestinationIndexPath:(id)arg0 dragItem:(id)arg1 placeholderConfiguration:(id)arg2 ;
-(id)initWithDragItem:(id)arg0 target:(id)arg1 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;


@end


#endif