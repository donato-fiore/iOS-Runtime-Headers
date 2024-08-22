// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKALERTCONTROLLER_H
#define CKALERTCONTROLLER_H

@class UIAlertController, NSArray, NSString;
@protocol CKAdaptivePresentedControllerProtocol, CKAlertControllerDelegate;



@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol>



@property (readonly, nonatomic) NSArray *actions;
@property (weak, nonatomic) NSObject<CKAlertControllerDelegate> *alertDelegate; // ivar: _alertDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preserveModalPresentationStyle; // ivar: _preserveModalPresentationStyle
@property (nonatomic) BOOL shouldHidePresentingWindow; // ivar: _shouldHidePresentingWindow
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsWindowedPresentation; // ivar: _wantsWindowedPresentation


+(id)alertControllerWithTitle:(id)arg0 message:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(BOOL)allowsRotation;
-(void)addAction:(id)arg0 ;
-(void)presentFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif