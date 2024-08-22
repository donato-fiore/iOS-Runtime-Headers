// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACELEMENTACTIONSPRESENTATIONVIEWCONTROLLER_H
#define CACELEMENTACTIONSPRESENTATIONVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSString, AXElement;
@protocol UIPopoverPresentationControllerDelegate, CACViewController, CACElementActionsPresentationViewControllerDelegate;



@interface CACElementActionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACViewController>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXElement *element; // ivar: _element
@property (weak, nonatomic) NSObject<CACElementActionsPresentationViewControllerDelegate> *elementActionsDelegate; // ivar: _elementActionsDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOverlay;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger zOrder;


+(BOOL)canShowElementActionsForElement:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)actionForAXAction:(id)arg0 ;
-(id)init;
-(void)performHideWithCompletion:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif