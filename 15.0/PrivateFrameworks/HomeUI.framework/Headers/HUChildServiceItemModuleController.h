// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHILDSERVICEITEMMODULECONTROLLER_H
#define HUCHILDSERVICEITEMMODULECONTROLLER_H

@class HFItemBuilder<HFServiceLikeBuilder>, NSString, NSMapTable;
@protocol HUEditableCheckmarkDelegate, HUChildServiceModuleControllerDelegate;


#import "HUItemTableModuleController.h"
#import "HUChildServiceEditorItemModule.h"

@interface HUChildServiceItemModuleController : HUItemTableModuleController <HUEditableCheckmarkDelegate>



@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *activelyEditingNameServiceBuilder; // ivar: _activelyEditingNameServiceBuilder
@property (readonly, nonatomic) BOOL allConfigurationDisabled; // ivar: _allConfigurationDisabled
@property (retain, nonatomic) HUChildServiceEditorItemModule *childServiceItemModule; // ivar: _childServiceItemModule
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUChildServiceModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *identifyButtonMap; // ivar: _identifyButtonMap
@property (readonly) Class superclass;


-(BOOL)canSelectDisabledItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(void)_identifyButtonPressed:(id)arg0 forEvent:(id)arg1 ;
-(void)checkmarkTappedInCell:(id)arg0 forItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 item:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateAllConfigurationDisabled;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif