// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIFACEIDENROLLMENTCOORDINATOR_H
#define PSUIFACEIDENROLLMENTCOORDINATOR_H

@class NSString, UINavigationController, UIViewController;
@protocol BKUIPearlEnrollControllerDelegate, PSEnrollmentNavigationControllerDismissalDelegate, PSUIFaceIDEnrollmentCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PSEnrollmentNavigationController.h"

@interface PSUIFaceIDEnrollmentCoordinator : NSObject <BKUIPearlEnrollControllerDelegate, PSEnrollmentNavigationControllerDismissalDelegate>



@property (retain, nonatomic) PSEnrollmentNavigationController *_presentedViewController; // ivar: __presentedViewController
@property (readonly, nonatomic) NSUInteger configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSUIFaceIDEnrollmentCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *presentedViewController;
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)initWithPresentingViewController:(id)arg0 configuration:(NSUInteger)arg1 ;
-(void)enrollmentNavigationControllerDidDismiss:(id)arg0 ;
-(void)enrollmentNavigationControllerWillDismiss:(id)arg0 ;
-(void)pearlEnrollController:(id)arg0 finishedEnrollWithError:(id)arg1 ;
-(void)preloadAndCreateEnrollmentControllerWithPasscode:(id)arg0 completion:(id)arg1 ;
-(void)startWithPasscode:(id)arg0 ;


@end


#endif