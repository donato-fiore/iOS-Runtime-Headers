// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCONTENTACTIONINTERPRETER_H
#define CSCONTENTACTIONINTERPRETER_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface CSContentActionInterpreter : NSObject

@property (weak, nonatomic) UIViewController *digestOnboardingSuggestionViewController; // ivar: _digestOnboardingSuggestionViewController
@property (weak, nonatomic) UIViewController *nowPlayingViewController; // ivar: _nowPlayingViewController


-(void)_viewControllerFromAction:(id)arg0 completion:(id)arg1 ;


@end


#endif