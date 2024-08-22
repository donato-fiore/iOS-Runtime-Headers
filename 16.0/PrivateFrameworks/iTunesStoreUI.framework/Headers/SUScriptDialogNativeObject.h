// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTDIALOGNATIVEOBJECT_H
#define SUSCRIPTDIALOGNATIVEOBJECT_H



#import "SUScriptNativeObject.h"

@interface SUScriptDialogNativeObject : SUScriptNativeObject



-(id)_makeAlertControllerForDialog:(id)arg0 style:(NSInteger)arg1 ;
-(void)_showSheetInView:(id)arg0 fromViewController:(id)arg1 ;
-(void)_tearDownForDismissWithButtonIndex:(NSInteger)arg0 ;
-(void)dismiss;
-(void)show;
-(void)showFromRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showSheet;
-(void)showSheetInViewController:(id)arg0 ;


@end


#endif