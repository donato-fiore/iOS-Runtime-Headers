// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDRAGANDDROPGESTURESWITCHERMODIFIEREVENT_H
#define SBDRAGANDDROPGESTURESWITCHERMODIFIEREVENT_H

@class NSString;


#import "SBGestureSwitcherModifierEvent.h"
#import "SBSwitcherDropRegionContext.h"

@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (retain, nonatomic) NSString *draggedSceneIdentifier; // ivar: _draggedSceneIdentifier
@property (nonatomic) NSInteger draggedSceneLayoutRole; // ivar: _draggedSceneLayoutRole
@property (nonatomic) NSInteger dropAction; // ivar: _dropAction
@property (nonatomic) CGFloat platterScale; // ivar: _platterScale
@property (nonatomic) CGRect platterViewFrame; // ivar: _platterViewFrame
@property (nonatomic, getter=hasPlatterized) BOOL platterized; // ivar: _platterized
@property (nonatomic, getter=hasPreviewLifted) BOOL previewHasLifted; // ivar: _previewHasLifted
@property (nonatomic, getter=isSwitcherDrag) BOOL switcherDrag; // ivar: _switcherDrag
@property (retain, nonatomic) SBSwitcherDropRegionContext *switcherDropRegionContext; // ivar: _switcherDropRegionContext
@property (nonatomic, getter=isWindowDrag) BOOL windowDrag; // ivar: _windowDrag


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif