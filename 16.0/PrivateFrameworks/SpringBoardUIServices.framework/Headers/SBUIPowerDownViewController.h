// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPOWERDOWNVIEWCONTROLLER_H
#define SBUIPOWERDOWNVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SBUIPowerDownViewDelegate, SBUIPowerDownViewControllerInterface, SBUIPowerDownViewControllerDelegate;



@interface SBUIPowerDownViewController : UIViewController <SBUIPowerDownViewDelegate, SBUIPowerDownViewControllerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBUIPowerDownViewControllerDelegate> *powerDownDelegate; // ivar: powerDownDelegate
@property (readonly) Class superclass;


-(id)_powerDownView;
-(void)loadView;
-(void)powerDownViewAnimateOutCompleted:(id)arg0 ;
-(void)powerDownViewRequestCancel:(id)arg0 ;
-(void)powerDownViewRequestPowerDown:(id)arg0 ;
-(void)powerDownViewWillAnimateIn:(id)arg0 ;
-(void)powerDownViewWillAnimateOut:(id)arg0 ;
-(void)showPowerDownFindMyAlert;
// -(void)showPowerDownFindMyAlertWithProceed:(id)arg0 cancelCompletion:(unk)arg1  ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif