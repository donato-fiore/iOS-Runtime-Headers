// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFFINISHSETUPFACEIDVIEWCONTROLLER_H
#define BFFFINISHSETUPFACEIDVIEWCONTROLLER_H

@class NSString;
@protocol BFFFaceIDViewControllerDelegate;


#import "BFFFaceIDViewController.h"

@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController <BFFFaceIDViewControllerDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode


-(id)init;
-(id)passcodeForFaceIDViewController:(id)arg0 ;
-(void)faceIDViewController:(id)arg0 didCompleteWithResult:(NSUInteger)arg1 pushedViewControllers:(id)arg2 ;


@end


#endif