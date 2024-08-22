// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWANIMATIONCONTEXT_H
#define UIVIEWANIMATIONCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UITableViewCell.h"

@interface UIViewAnimationContext : NSObject {
    NSArray *_viewAnimations;
    NSInteger _animationCount;
    id *_completionHandler;
    UITableViewCell *_swipeToDeleteCell;
}






@end


#endif