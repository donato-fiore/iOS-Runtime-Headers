// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERCONDITIONEDITORITEMMODULECONTROLLER_H
#define HUTRIGGERCONDITIONEDITORITEMMODULECONTROLLER_H

@class NSString;
@protocol HUSwitchCellDelegate, HUTriggerTimeConditionDetailEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate;


#import "HUItemModuleController.h"
#import "HUTriggerConditionDetailEditingContext.h"
#import "HUTriggerConditionEditorItemModule.h"

@interface HUTriggerConditionEditorItemModuleController : HUItemModuleController <HUSwitchCellDelegate, HUTriggerTimeConditionDetailEditorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUTriggerConditionEditorItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUTriggerConditionDetailEditingContext *detailEditingContext; // ivar: _detailEditingContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *module;
@property (readonly) Class superclass;


-(BOOL)_canEditConditionOptionItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 ;
-(void)_dismissDetailEditor:(id)arg0 ;
-(void)_presentDetailEditorForConditionOptionItem:(id)arg0 ;
-(void)accessoryButtonTappedForItem:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)timeConditionEditor:(id)arg0 didFinishWithCondition:(id)arg1 ;
-(void)timeConditionEditorDidCancel:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif