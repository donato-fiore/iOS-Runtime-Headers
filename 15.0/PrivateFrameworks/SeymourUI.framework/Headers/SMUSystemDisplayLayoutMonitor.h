// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SMUSYSTEMDISPLAYLAYOUTMONITOR_H
#define SMUSYSTEMDISPLAYLAYOUTMONITOR_H

@class FBSDisplayLayoutMonitor;

#import <Foundation/Foundation.h>


@interface SMUSystemDisplayLayoutMonitor : NSObject

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (copy, nonatomic) id *transitionHandler; // ivar: _transitionHandler


-(id)init;
-(void)dealloc;
-(void)handleUpdatedLayout:(id)arg0 transitionContext:(id)arg1 ;


@end


#endif