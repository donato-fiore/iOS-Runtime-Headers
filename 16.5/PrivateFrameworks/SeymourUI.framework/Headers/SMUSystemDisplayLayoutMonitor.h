// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMUSYSTEMDISPLAYLAYOUTMONITOR_H
#define SMUSYSTEMDISPLAYLAYOUTMONITOR_H

@class NSArray, NSString, FBSDisplayLayoutMonitor;
@protocol SMUSystemDisplayLayoutMonitoring;

#import <Foundation/Foundation.h>


@interface SMUSystemDisplayLayoutMonitor : NSObject <SMUSystemDisplayLayoutMonitoring>



@property (readonly, nonatomic) NSArray *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (readonly) Class superclass;
@property (copy, nonatomic) id *transitionHandler; // ivar: transitionHandler


+(id)externalDisplayLayoutMonitorWithIdentity:(id)arg0 ;
+(id)mainDisplayLayoutMonitor;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)handleUpdatedLayout:(id)arg0 transitionContext:(id)arg1 ;


@end


#endif