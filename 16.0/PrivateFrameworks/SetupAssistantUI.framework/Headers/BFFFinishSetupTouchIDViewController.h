// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFFINISHSETUPTOUCHIDVIEWCONTROLLER_H
#define BFFFINISHSETUPTOUCHIDVIEWCONTROLLER_H

@class UIViewController, BiometricKitUIEnrollViewController, BiometricKitIdentity, UIBarButtonItem, NSString;
@protocol BiometricKitUIEnrollResultDelegate;



@interface BFFFinishSetupTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate>

 {
    BiometricKitUIEnrollViewController *_enrollController;
    BiometricKitIdentity *_identity;
    UIBarButtonItem *_cancelLeftNavigationItem;
    BOOL _enrollComplete;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (readonly) Class superclass;


-(id)_cancelLeftNavigationItem;
-(id)init;
-(void)_didCompleteMesaControllerWithResult:(NSUInteger)arg0 ;
-(void)_userDidTapCancelButton:(id)arg0 ;
-(void)beginEnrollment;
-(void)dealloc;
-(void)deleteIdentity;
-(void)didBecomeActive:(id)arg0 ;
-(void)didResignActive:(id)arg0 ;
-(void)endEnrollment;
-(void)enrollResult:(int)arg0 identity:(id)arg1 ;
-(void)loadView;
-(void)resetLeftNavigationItem;
-(void)restartEnrollment;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif