// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDTRANSITIONCONTROLLER_H
#define MKLOOKAROUNDTRANSITIONCONTROLLER_H

@class NSString, UIView;
@protocol UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface MKLookAroundTransitionController : NSObject <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialFrame; // ivar: _initialFrame
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(void)_dismiss:(id)arg0 fromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_present:(id)arg0 fromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)beginFullScreenDismissalOfViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)beginFullScreenPresentationOfViewController:(id)arg0 fromView:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif