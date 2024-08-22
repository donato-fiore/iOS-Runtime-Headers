// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTORYBOARDUNWINDSEGUESOURCE_H
#define UISTORYBOARDUNWINDSEGUESOURCE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface UIStoryboardUnwindSegueSource : NSObject {
    NSMutableArray *_searchChain;
}


@property (readonly) id *sender; // ivar: _sender
@property (readonly) UIViewController *sourceViewController; // ivar: _sourceViewController
@property (readonly) SEL unwindAction; // ivar: _unwindAction


-(id)_childContainingUnwindSourceForViewController:(id)arg0 ;
-(id)_findDestination;
-(id)_initWithSourceViewController:(id)arg0 action:(SEL)arg1 sender:(id)arg2 ;
-(id)init;


@end


#endif