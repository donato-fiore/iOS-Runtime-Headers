// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNIFIEDTABBARITEM_H
#define UNIFIEDTABBARITEM_H

@class SFUnifiedTabBarItem, NSUUID, NSString;
@protocol TabCollectionItem;


#import "UnifiedTabBarItem.h"

@interface UnifiedTabBarItem : SFUnifiedTabBarItem <TabCollectionItem>

 {
    UnifiedTabBarItem *_secondaryItem;
}


@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dragState; // ivar: _dragState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSUInteger mediaStateIcon;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(BOOL)isDragging;
-(BOOL)isDropping;
-(id)secondaryItem;
-(void)_updateHidden;
-(void)setIcon:(id)arg0 ;


@end


#endif