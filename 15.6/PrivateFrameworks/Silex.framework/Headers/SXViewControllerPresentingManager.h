// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXVIEWCONTROLLERPRESENTINGMANAGER_H
#define SXVIEWCONTROLLERPRESENTINGMANAGER_H

@class UIViewController, NSString;
@protocol SXViewControllerPresenting, SWViewControllerPresentingManager;

#import <Foundation/Foundation.h>


@interface SXViewControllerPresentingManager : NSObject <SXViewControllerPresenting, SWViewControllerPresentingManager>



@property (readonly, nonatomic) UIViewController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(void)popOrDismissViewControllerAnimated:(BOOL)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 ;


@end


#endif