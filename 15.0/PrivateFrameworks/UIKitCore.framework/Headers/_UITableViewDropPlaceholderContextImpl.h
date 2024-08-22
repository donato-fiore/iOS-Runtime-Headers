// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWDROPPLACEHOLDERCONTEXTIMPL_H
#define _UITABLEVIEWDROPPLACEHOLDERCONTEXTIMPL_H

@class NSString, NSUUID;
@protocol _UITableViewPlaceholderContext, UIDragAnimating, _UITableViewPlaceholderContextDelegate;

#import <Foundation/Foundation.h>

#import "UIDragItem.h"

@interface _UITableViewDropPlaceholderContextImpl : NSObject <_UITableViewPlaceholderContext>



@property (retain, nonatomic, getter=_animator, setter=_setAnimator:) NSObject<UIDragAnimating> *animator; // ivar: _animator
@property (copy, nonatomic) id *cellUpdateHandler; // ivar: _cellUpdateHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UITableViewPlaceholderContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragItem *dragItem; // ivar: _dragItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (retain, nonatomic, getter=_shadowUpdateIdentifier, setter=_setShadowUpdateIdentifier:) NSUUID *shadowUpdateIdentifier; // ivar: _shadowUpdateIdentifier
@property (readonly) Class superclass;


-(BOOL)commitInsertionWithDataSourceUpdates:(id)arg0 ;
-(BOOL)deletePlaceholder;
-(id)initWithDelegate:(id)arg0 dragItem:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(CGFloat)arg3 cellUpdateHandler:(id)arg4 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;


@end


#endif