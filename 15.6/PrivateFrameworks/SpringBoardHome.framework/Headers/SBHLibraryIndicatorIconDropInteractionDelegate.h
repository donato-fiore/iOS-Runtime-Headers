// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYINDICATORICONDROPINTERACTIONDELEGATE_H
#define SBHLIBRARYINDICATORICONDROPINTERACTIONDELEGATE_H

@class NSString, UIDropInteraction;
@protocol SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate, SBHLibraryIndicatorIconDropInteractionContextProviding;

#import <Foundation/Foundation.h>

#import "SBIconView.h"

@interface SBHLibraryIndicatorIconDropInteractionDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate>



@property (weak, nonatomic) NSObject<SBHLibraryIndicatorIconDropInteractionContextProviding> *contextProvider; // ivar: _contextProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconView *libraryIndicatorIconView; // ivar: _libraryIndicatorIconView
@property (readonly) Class superclass;


-(BOOL)_canPerformDropForAnyItemInSession:(id)arg0 ;
-(BOOL)_canPerformDropForDragItem:(id)arg0 ;
-(BOOL)_canPerformDropForDraggedIcon:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(id)_draggedItemIdentifiersInSession:(id)arg0 ;
-(id)_iconIdentifierForDragItem:(id)arg0 ;
-(id)_iconModel;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithLibraryIndicatorIconView:(id)arg0 ;
-(id)targetItemForSpringLoadingInteractionInView:(id)arg0 atLocation:(struct CGPoint )arg1 forDropSession:(id)arg2 ;
-(id)targetViewForSpringLoadingEffectForView:(id)arg0 ;
-(void)_handleSpringLoadedInteractionDidActivateWithContext:(id)arg0 ;
-(void)_notifyDidPerformDropForSession:(id)arg0 ;
-(void)_updateIndicatorIconViewForSession:(id)arg0 isActive:(BOOL)arg1 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;


@end


#endif