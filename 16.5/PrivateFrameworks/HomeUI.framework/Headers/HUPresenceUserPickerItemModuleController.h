// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPRESENCEUSERPICKERITEMMODULECONTROLLER_H
#define HUPRESENCEUSERPICKERITEMMODULECONTROLLER_H

@class NSString;
@protocol UITextViewDelegate, HUPresenceUserPickerItemModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUPresenceUserPickerItemModuleController : HUItemModuleController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUPresenceUserPickerItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSelectDisabledItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_showAlertForConfirmationPrompt:(id)arg0 ;
-(void)accessoryButtonTappedForItem:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif