// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWPLACEHOLDERCONTEXT_H
#define _UICOLLECTIONVIEWPLACEHOLDERCONTEXT_H

@class NSString, NSIndexPath, NSUUID;
@protocol UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext, _UICollectionViewPlaceholderContextDelegate;

#import <Foundation/Foundation.h>

#import "_UIDropAnimationHandlers.h"
#import "UIDragItem.h"

@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext>



@property (retain, nonatomic) _UIDropAnimationHandlers *animationHandlers; // ivar: _animationHandlers
@property (copy, nonatomic) id *cellUpdateHandler; // ivar: _cellUpdateHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UICollectionViewPlaceholderContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragItem *dragItem; // ivar: _dragItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *originalInsertionIndexPath; // ivar: _originalInsertionIndexPath
@property (retain, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (retain, nonatomic) NSUUID *shadowUpdateIdentifier; // ivar: _shadowUpdateIdentifier
@property (readonly) Class superclass;


-(BOOL)commitInsertionWithDataSourceUpdates:(id)arg0 ;
-(BOOL)deletePlaceholder;
-(id)initWithOriginalInsertionIndexPath:(id)arg0 dragItem:(id)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3 cellUpdateHandler:(id)arg4 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)setNeedsCellUpdate;


@end


#endif