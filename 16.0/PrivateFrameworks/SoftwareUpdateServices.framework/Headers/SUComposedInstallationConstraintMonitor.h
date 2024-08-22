// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOMPOSEDINSTALLATIONCONSTRAINTMONITOR_H
#define SUCOMPOSEDINSTALLATIONCONSTRAINTMONITOR_H

@class NSSet, NSString;
@protocol SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SUInstallationConstraintMonitorDelegate> *_queue_delegate;
    NSUInteger _queue_representedConstraints;
}


@property (readonly, retain, nonatomic) NSSet *constraintMonitors; // ivar: _queue_installationConstraintMonitors
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUInstallationConstraintMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger representedConstraints;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unsatisfiedConstraints;


-(BOOL)isSatisfied;
-(NSUInteger)_queue_unsatisfiedConstraintsWithIgnorableConstraints:(NSUInteger)arg0 ;
-(NSUInteger)unsatisfiedConstraintsWithIgnorableConstraints:(NSUInteger)arg0 ;
-(id)initWithInternalQueue:(id)arg0 withInstallationConstraintMonitors:(id)arg1 ;
-(void)_queue_clearDelegate;
-(void)_queue_invalidateChildConstraintMonitors;
-(void)_queue_noteInstallationConstraintMonitor:(id)arg0 constraintsDidChange:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)installationConstraintMonitor:(id)arg0 constraintsDidChange:(NSUInteger)arg1 ;


@end


#endif