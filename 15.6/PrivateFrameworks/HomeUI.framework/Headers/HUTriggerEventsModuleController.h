// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTRIGGEREVENTSMODULECONTROLLER_H
#define HUTRIGGEREVENTSMODULECONTROLLER_H

@class NSString;
@protocol HUEventUIFlowDelegate, HUEventUIFlowPresentationController, HUTriggerEventsModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUTriggerEventsModuleController : HUItemModuleController <HUEventUIFlowDelegate, HUEventUIFlowPresentationController>



@property (nonatomic) BOOL allowsEditingEvents; // ivar: _allowsEditingEvents
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEventsModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)trailingSwipeActionsForItem:(id)arg0 ;
-(void)deleteItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)eventFlow:(id)arg0 didFinishWithEventBuilderItem:(id)arg1 ;
-(void)eventFlowDidCancel:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)transitionToViewController:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif