// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASPRESENTER_H
#define VIDEOSEXTRASPRESENTER_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>

#import "VideosExtrasContext.h"

@interface VideosExtrasPresenter : NSObject <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VideosExtrasContext *extrasContext; // ivar: _extrasContext
@property (nonatomic) CGRect extrasMenuBarFrame; // ivar: _extrasMenuBarFrame
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithExtrasContext:(id)arg0 extrasMenuBarFrame:(struct CGRect )arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)dismissExtrasAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentExtrasWith:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif