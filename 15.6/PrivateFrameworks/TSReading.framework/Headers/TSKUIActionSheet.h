// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKUIACTIONSHEET_H
#define TSKUIACTIONSHEET_H

@class UIActionSheet, UIView, NSString;
@protocol UIActionSheetDelegate;


#import "TSKAbstractAlert.h"

@interface TSKUIActionSheet : TSKAbstractAlert <UIActionSheetDelegate>

 {
    UIActionSheet *_actionSheet;
    UIView *_targetView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)alertWithTitle:(id)arg0 cancelButtonTitle:(id)arg1 destructiveButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 targetView:(id)arg4 ;
-(NSInteger)addButtonWithTitle:(id)arg0 ;
-(NSInteger)cancelButtonIndex;
-(NSInteger)firstOtherButtonIndex;
-(NSInteger)numberOfButtons;
-(id)buttonTitleAtIndex:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 cancelButtonTitle:(id)arg1 destructiveButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 targetView:(id)arg4 ;
-(void)actionSheet:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)actionSheet:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)actionSheet:(id)arg0 willDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didPresentActionSheet:(id)arg0 ;
-(void)dismissWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setCancelButtonIndex:(NSInteger)arg0 ;
-(void)showAlert;
-(void)willPresentActionSheet:(id)arg0 ;


@end


#endif