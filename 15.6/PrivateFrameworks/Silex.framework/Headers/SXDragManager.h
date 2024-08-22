// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDRAGMANAGER_H
#define SXDRAGMANAGER_H

@class NSString, UIDragInteraction;
@protocol UIDragInteractionDelegate, SXDragManagerDataSource;

#import <Foundation/Foundation.h>


@interface SXDragManager : NSObject <UIDragInteractionDelegate>



@property (weak, nonatomic) NSObject<SXDragManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sharingPolicy; // ivar: _sharingPolicy
@property (readonly) Class superclass;


-(BOOL)dragSession:(id)arg0 containsDragItemWithIdentifier:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragItemForObject:(id)arg0 withSession:(id)arg1 ;
-(id)initWithSharingPolicy:(NSUInteger)arg0 dataSource:(id)arg1 ;
-(id)itemsForSession:(id)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)dealloc;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg0 ;


@end


#endif