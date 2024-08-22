// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSTOUCHIDCONTROLLER_H
#define DSTOUCHIDCONTROLLER_H

@class BiometricKitIdentity, UIBarButtonItem, NSString, BiometricKitUIEnrollViewController;
@protocol BiometricKitUIEnrollResultDelegate, DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSTouchIDController : DSOBWelcomeController <BiometricKitUIEnrollResultDelegate, DSController>

 {
    BiometricKitIdentity *_identity;
    UIBarButtonItem *_cancelLeftNavigationItem;
    BOOL _enrollComplete;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController; // ivar: _enrollController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isTouchIDEnrolled;
-(BOOL)hasMultipleFingerprints;
-(BOOL)shouldShow;
-(id)_cancelLeftNavigationItem;
-(id)init;
-(void)_userDidTapCancelButton:(id)arg0 ;
-(void)addNavigationItems;
-(void)beginEnrollment;
-(void)dealloc;
-(void)deleteAllIdentities;
-(void)deleteIdentity;
-(void)enrollResult:(int)arg0 bkIdentity:(id)arg1 ;
-(void)enrollTouchID;
-(void)resetTouchID;
-(void)restartEnrollment;
-(void)viewDidLoad;


@end


#endif