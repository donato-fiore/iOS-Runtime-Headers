// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTATUSBARCONTAINER_H
#define SBSTATUSBARCONTAINER_H

@class NSString, UIStatusBar;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBStatusBarReusePool.h"

@interface SBStatusBarContainer : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (weak, nonatomic) SBStatusBarReusePool *reusePool; // ivar: _reusePool
@property (weak, nonatomic) UIStatusBar *statusBar; // ivar: _statusBar
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;


@end


#endif