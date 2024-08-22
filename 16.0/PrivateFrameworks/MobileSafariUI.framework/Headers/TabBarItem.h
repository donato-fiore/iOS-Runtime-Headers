// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABBARITEM_H
#define TABBARITEM_H

@class NSUUID, NSString, UIImage, NSArray;
@protocol SFTabHoverPreviewItem, TabCollectionItem;

#import <Foundation/Foundation.h>

#import "TabBarItemLayoutInfo.h"
#import "TabBar.h"

@interface TabBarItem : NSObject <SFTabHoverPreviewItem, TabCollectionItem>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dragState; // ivar: _dragState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (retain, nonatomic) TabBarItemLayoutInfo *layoutInfo; // ivar: _layoutInfo
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (copy, nonatomic) NSArray *shareParticipants; // ivar: _shareParticipants
@property (readonly) Class superclass;
@property (weak, nonatomic) TabBar *tabBar; // ivar: _tabBar
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic, getter=isUnread) BOOL unread; // ivar: _unread


-(id)init;
-(id)menuElementRepresentationWithSelectionHandler:(id)arg0 ;


@end


#endif