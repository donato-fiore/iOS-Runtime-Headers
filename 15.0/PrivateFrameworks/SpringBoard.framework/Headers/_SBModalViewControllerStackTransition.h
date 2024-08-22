// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBMODALVIEWCONTROLLERSTACKTRANSITION_H
#define _SBMODALVIEWCONTROLLERSTACKTRANSITION_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface _SBModalViewControllerStackTransition : NSObject {
    UIViewController *_viewController;
    NSUInteger _operation;
    BOOL _animated;
    id *_completion;
}




-(id)description;


@end


#endif