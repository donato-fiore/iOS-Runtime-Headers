// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCOMPOSEDRAGSOURCE_H
#define CNCOMPOSEDRAGSOURCE_H

@class NSString, UIDragInteraction, UIView;
@protocol UIDragInteractionDelegate_Private, CNComposeDragSourceDelegate;

#import <Foundation/Foundation.h>


@interface CNComposeDragSource : NSObject <UIDragInteractionDelegate_Private>

 {
    ? _delegateFlags;
}


@property (nonatomic) BOOL allowsDragOverridingMasterSwitch; // ivar: _allowsDragOverridingMasterSwitch
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNComposeDragSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


-(BOOL)dragInteraction:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)initWithView:(id)arg0 delegate:(id)arg1 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;


@end


#endif