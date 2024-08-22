// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STINTRODUCTIONCONTROLLER_H
#define STINTRODUCTIONCONTROLLER_H

@class NSString, UIViewController, UINavigationController;

#import <Foundation/Foundation.h>

#import "STIntroductionModel.h"

@interface STIntroductionController : NSObject

@property BOOL allowParentalControls; // ivar: _allowParentalControls
@property (copy) NSString *altDSID; // ivar: _altDSID
@property BOOL askForRecoveryAppleID; // ivar: _askForRecoveryAppleID
@property (copy) NSString *childName; // ivar: _childName
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud; // ivar: _childOrNotSignedIntoiCloud
@property (copy) id *completionBlock; // ivar: _completionBlock
@property BOOL forceParentalControls; // ivar: _forceParentalControls
@property (readonly) UIViewController *initialViewController;
@property (readonly) STIntroductionModel *introductionModel; // ivar: _introductionModel
@property (nonatomic) BOOL isModalPresentation; // ivar: _isModalPresentation
@property (retain) UINavigationController *navigationController; // ivar: _navigationController
@property BOOL skipWelcome; // ivar: _skipWelcome


-(id)_viewControllerFollowingViewController:(id)arg0 ;
-(id)init;
-(void)_cancel:(id)arg0 ;
-(void)_viewControllerCompleted:(id)arg0 ;
-(void)presentOverViewController:(id)arg0 ;


@end


#endif