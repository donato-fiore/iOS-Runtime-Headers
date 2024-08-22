// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABOVERVIEWITEM_H
#define TABOVERVIEWITEM_H

@class NSUUID, NSString, UIImage, NSArray;
@protocol TabCollectionItem;

#import <Foundation/Foundation.h>

#import "TabOverviewItemLayoutInfo.h"
#import "TabOverview.h"

@interface TabOverviewItem : NSObject <TabCollectionItem>

 {
    BOOL _closing;
    BOOL _incoming;
    BOOL _isAlternateItem;
    TabOverviewItemLayoutInfo *_layoutInfo;
    TabOverview *_tabOverview;
    TabOverviewItemLayoutInfo *_dropPreviewLayoutInfo;
}


@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dragState; // ivar: _dragState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (copy, nonatomic) NSArray *shareParticipants; // ivar: _shareParticipants
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic, getter=isUnread) BOOL unread; // ivar: _unread


-(id)init;


@end


#endif