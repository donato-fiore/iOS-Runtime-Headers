// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTVIEWDRAGGINGAPPPOLICYHANDLER_H
#define SBICONLISTVIEWDRAGGINGAPPPOLICYHANDLER_H

@class NSMapTable, NSString;
@protocol SBIconListViewDraggingPolicyHandling;

#import <Foundation/Foundation.h>

#import "SBIconListViewDraggingDestinationDelegate.h"
#import "SBHIconEditingSettings.h"

@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling>

 {
    NSMapTable *_dragContexts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SBIconListViewDraggingDestinationDelegate *draggingDestinationDelegate; // ivar: _draggingDestinationDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHIconEditingSettings *iconEditingSettings; // ivar: _iconEditingSettings
@property (readonly) Class superclass;


-(BOOL)allowsSpringLoadForSession:(id)arg0 onIconView:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)dragHitRegionForDropSession:(id)arg0 iconListView:(id)arg1 point:(struct CGPoint )arg2 icon:(id)arg3 ;
-(id)_destinationFolderIconViewForDragItem:(id)arg0 iconIndexPath:(*id)arg1 folderRelativeIconIndexPath:(*id)arg2 ;
-(id)_dropInteraction:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)_iconForDragItem:(id)arg0 ;
-(id)_iconViewForDragItem:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)init;
-(void)_cancelDragPauseTimerForDropSession:(id)arg0 ;
-(void)_cancelDragPauseTimers;
-(void)_dragPauseTimerFired:(id)arg0 ;
-(void)_resetDragPauseTimerForPoint:(struct CGPoint )arg0 dropSession:(id)arg1 ;
-(void)_updateDragPauseForDropSession:(id)arg0 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)handleSpringLoadOnIconView:(id)arg0 ;


@end


#endif