// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTORYBOARDUNWINDCHAIN_H
#define _UISTORYBOARDUNWINDCHAIN_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface _UIStoryboardUnwindChain : NSObject {
    NSMutableArray *_viewControllers;
    NSUInteger _commonAncestorIdx;
    NSUInteger _modalAncestorContainingSourceIdx;
}


@property (readonly, nonatomic) UIViewController *commonAncestorViewController;
@property (readonly, nonatomic) UIViewController *modalAncestorContainingSourceViewController;


-(id)debugDescription;
-(id)initFromSourceViewController:(id)arg0 toDestinationViewController:(id)arg1 ;
-(void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(id)arg0 ;


@end


#endif