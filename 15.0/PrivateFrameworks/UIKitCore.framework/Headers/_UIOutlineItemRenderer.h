// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIOUTLINEITEMRENDERER_H
#define _UIOUTLINEITEMRENDERER_H

@class UIDiffableDataSourceItemRenderer;



@interface _UIOutlineItemRenderer : UIDiffableDataSourceItemRenderer

@property (copy, nonatomic) id *willUpdateCellHandler; // ivar: _willUpdateCellHandler


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 cellClass:(Class)arg1 handler:(id)arg2 ;


@end


#endif