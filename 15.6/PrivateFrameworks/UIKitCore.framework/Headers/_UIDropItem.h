// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDROPITEM_H
#define _UIDROPITEM_H

@class NSItemProvider;


#import "UIDragItem.h"

@interface _UIDropItem : UIDragItem

@property (retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // ivar: _dropItemProvider
@property (retain, nonatomic, getter=_localDragItem, setter=_setLocalDragItem:) UIDragItem *localDragItem; // ivar: _localDragItem


-(id)_privateLocalContext;
-(id)itemProvider;
-(id)localObject;
-(void)_setPrivateLocalContext:(id)arg0 ;
-(void)setLocalObject:(id)arg0 ;


@end


#endif