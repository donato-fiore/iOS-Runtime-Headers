// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKOVERLAYCONTEXT_H
#define SBLOCKOVERLAYCONTEXT_H


#import <Foundation/Foundation.h>

#import "SBLockOverlayViewController.h"

@interface SBLockOverlayContext : NSObject

@property (copy, nonatomic) id *activationBlock; // ivar: _activationBlock
@property (copy, nonatomic) id *deactivationBlock; // ivar: _deactivationBlock
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) SBLockOverlayViewController *viewController; // ivar: _viewController


-(id)initWithOverlayViewController:(id)arg0 priority:(NSUInteger)arg1 ;


@end


#endif