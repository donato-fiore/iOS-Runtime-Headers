// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BEALERTCONTROLLER_H
#define BEALERTCONTROLLER_H

@class UIAlertController;



@interface BEAlertController : UIAlertController

@property (nonatomic) NSInteger alertTag; // ivar: _alertTag
@property (nonatomic) BOOL isSheet; // ivar: _isSheet


+(id)showOneButtonAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 buttonHandler:(id)arg3 ;
+(id)showOneButtonSheetOnViewController:(id)arg0 withTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonHandler:(id)arg4 ;
// +(id)showTwoButtonAlertWithTitle:(id)arg0 message:(id)arg1 button1Title:(id)arg2 button1Style:(NSInteger)arg3 button1Handler:(id)arg4 button2Title:(unk)arg5 button2Style:(id)arg6 button2Handler:(NSInteger)arg7  ;
// +(id)showTwoButtonSheetOnViewController:(id)arg0 withTitle:(id)arg1 message:(id)arg2 button1Title:(id)arg3 button1Style:(NSInteger)arg4 button1Handler:(id)arg5 button2Title:(unk)arg6 button2Style:(id)arg7 button2Handler:(NSInteger)arg8  ;
-(NSInteger)buttonCount;
-(NSInteger)textFieldCount;
-(id)addAlertButtonWithTitle:(id)arg0 style:(NSInteger)arg1 tag:(NSInteger)arg2 action:(id)arg3 ;
-(id)addAlertButtonWithTitle:(id)arg0 tag:(NSInteger)arg1 action:(id)arg2 ;
-(id)addAlertCancelButtonWithTitle:(id)arg0 tag:(NSInteger)arg1 action:(id)arg2 ;
-(id)addAlertDestructiveButtonWithTitle:(id)arg0 tag:(NSInteger)arg1 action:(id)arg2 ;
-(id)buttonActionWithTag:(NSInteger)arg0 ;
-(id)cancelButtonAction;
-(id)initAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(id)initSheetWithTitle:(id)arg0 message:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 title:(id)arg1 message:(id)arg2 ;
-(id)textFieldWithTag:(NSInteger)arg0 ;
-(id)textInFieldWithTag:(NSInteger)arg0 ;
-(void)addAlertButton:(id)arg0 ;
-(void)addAlertTextFieldWithTag:(NSInteger)arg0 configurationBlock:(id)arg1 ;
-(void)dismissWithActionForTag:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)dismissWithCancelActionAnimated:(BOOL)arg0 ;
-(void)dismissWithNoActionAnimated:(BOOL)arg0 ;
-(void)showAnimated:(BOOL)arg0 ;
-(void)showFromRect:(struct CGRect )arg0 inView:(id)arg1 viewController:(id)arg2 arrowDirection:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(void)showInView:(id)arg0 viewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)showOnViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif