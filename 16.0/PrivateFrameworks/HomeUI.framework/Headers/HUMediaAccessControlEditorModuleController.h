// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIAACCESSCONTROLEDITORMODULECONTROLLER_H
#define HUMEDIAACCESSCONTROLEDITORMODULECONTROLLER_H

@class NSString, HFMediaAccessControlEditorItemModule;
@protocol UITextFieldDelegate, HUSwitchCellDelegate, HUMediaAccessControlEditorModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUMediaAccessControlEditorModuleController : HUItemModuleController <UITextFieldDelegate, HUSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUMediaAccessControlEditorModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HFMediaAccessControlEditorItemModule *module;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)updateAccessControlDescriptor:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif