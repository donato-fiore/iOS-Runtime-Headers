// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNAVIGATIONLISTDISPLAYCOLLECTIONLISTITEM_H
#define PXNAVIGATIONLISTDISPLAYCOLLECTIONLISTITEM_H

@class NSString;
@protocol PXDisplayCollectionList;


#import "PXNavigationListItem.h"

@interface PXNavigationListDisplayCollectionListItem : PXNavigationListItem {
    BOOL _renamable;
    BOOL _deletable;
    BOOL _expandable;
    NSString *_glyphImageName;
    NSString *_accessoryGlyphImageName;
}


@property (readonly, nonatomic) NSObject<PXDisplayCollectionList> *collection; // ivar: _collection
@property (nonatomic, getter=isDraggable) BOOL draggable; // ivar: _draggable
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (nonatomic, getter=isReorderable) BOOL reorderable; // ivar: _reorderable


-(BOOL)isDeletable;
-(BOOL)isExpandable;
-(BOOL)isRenamable;
-(id)accessoryGlyphImageName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)glyphImageName;
-(id)initWithIdentifier:(id)arg0 displayCollectionList:(id)arg1 title:(id)arg2 itemCount:(NSInteger)arg3 ;
-(id)representedObject;


@end


#endif