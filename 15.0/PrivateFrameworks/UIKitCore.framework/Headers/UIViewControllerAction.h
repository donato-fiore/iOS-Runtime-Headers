// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWCONTROLLERACTION_H
#define UIVIEWCONTROLLERACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface UIViewControllerAction : NSObject {
    NSString *_name;
    int _transition;
    id *_completion;
    CGFloat _curlUpRevealedHeight;
    UIViewController *_viewController;
}




-(id)initWithViewController:(id)arg0 name:(id)arg1 transition:(int)arg2 ;


@end


#endif