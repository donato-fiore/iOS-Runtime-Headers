// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONLISTITEM_H
#define PXNAVIGATIONLISTITEM_H

@class NSString, PHCollection;
@protocol PXNavigationListItem;

#import <Foundation/Foundation.h>


@interface PXNavigationListItem : NSObject <PXNavigationListItem>



@property (readonly, nonatomic) NSString *accessoryTitle; // ivar: _accessoryTitle
@property (copy, nonatomic) NSString *badgeString; // ivar: _badgeString
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggable) BOOL draggable;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) NSString *glyphImageName;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger indentationLevel;
@property (readonly, nonatomic) NSInteger itemCount; // ivar: _itemCount
@property (readonly, nonatomic, getter=isRemovable) BOOL removable;
@property (readonly, nonatomic, getter=isRenamable) BOOL renamable;
@property (readonly, nonatomic, getter=isReorderable) BOOL reorderable;
@property (readonly, nonatomic) id *representedObject;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *visualDescription;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNavigationListItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 itemCount:(NSInteger)arg2 ;


@end


#endif