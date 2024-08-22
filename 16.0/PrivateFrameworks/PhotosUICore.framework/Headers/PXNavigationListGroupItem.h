// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNAVIGATIONLISTGROUPITEM_H
#define PXNAVIGATIONLISTGROUPITEM_H

@class PHCollection;


#import "PXNavigationListItem.h"

@interface PXNavigationListGroupItem : PXNavigationListItem {
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
    PHCollection *_collection;
}




+(id)titleForIdentifier:(id)arg0 ;
-(BOOL)isDraggable;
-(BOOL)isExpandable;
-(BOOL)isGroup;
-(id)collection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 collection:(id)arg1 ;


@end


#endif