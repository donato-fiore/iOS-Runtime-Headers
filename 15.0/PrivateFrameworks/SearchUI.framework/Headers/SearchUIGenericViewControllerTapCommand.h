// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIGENERICVIEWCONTROLLERTAPCOMMAND_H
#define SEARCHUIGENERICVIEWCONTROLLERTAPCOMMAND_H

@class UIViewController;


#import "SearchUITapCommand.h"

@interface SearchUIGenericViewControllerTapCommand : SearchUITapCommand

@property BOOL prefersModalPresentation; // ivar: _prefersModalPresentation
@property (retain) UIViewController *viewController; // ivar: _viewController


-(id)initWithEnvironment:(id)arg0 viewController:(id)arg1 preferModalPresentation:(BOOL)arg2 ;
-(id)setupViewController;
-(void)sendAllFeedback;


@end


#endif