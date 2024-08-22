// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNAMEITEMMODULECONTROLLER_H
#define HUNAMEITEMMODULECONTROLLER_H

@class NSString, HFNamingComponents;
@protocol HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate;


#import "HUItemModuleController.h"
#import "HUNameItemModule.h"

@interface HUNameItemModuleController : HUItemModuleController <HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL nameFieldHasClearButton; // ivar: _nameFieldHasClearButton
@property (retain, nonatomic) HUNameItemModule *nameModule; // ivar: _nameModule
@property (retain, nonatomic) HFNamingComponents *namingComponent; // ivar: _namingComponent
@property (nonatomic) BOOL shouldUseAccessoryName; // ivar: _shouldUseAccessoryName
@property (nonatomic) BOOL showIcon; // ivar: _showIcon
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCustomIconEditing;


-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(id)_builderName;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initWithModule:(id)arg0 host:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)prepareForCommit;
-(void)_cleanupTextFieldSetBuilderName;
-(void)_setBuilderName:(id)arg0 ;
-(void)cancelNameEdit;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)iconPicker:(id)arg0 didPickIconDescriptor:(id)arg1 ;
-(void)iconPickerDidCancel:(id)arg0 ;
-(void)nameAndIconEditorCellDidTapIcon:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif