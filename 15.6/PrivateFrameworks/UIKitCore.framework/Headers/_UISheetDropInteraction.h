// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHEETDROPINTERACTION_H
#define _UISHEETDROPINTERACTION_H

@class NSMapTable, NSString;
@protocol UIDropInteractionDelegate, UIInteraction, _UISheetDropInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIDropInteraction.h"
#import "UIPresentationController.h"
#import "UIView.h"

@interface _UISheetDropInteraction : NSObject <UIDropInteractionDelegate, UIInteraction>



@property (readonly, nonatomic) NSMapTable *activityTypesOrActivities; // ivar: _activityTypesOrActivities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<_UISheetDropInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPresentationController *presentationController; // ivar: _presentationController
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(id)_activityTypeForSession:(id)arg0 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_activityForSession:(id)arg0 completion:(id)arg1 ;
-(void)_removeActivityTypeOrActivityForSession:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif