// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORBASE_H
#define SUINSTALLATIONCONSTRAINTMONITORBASE_H

@protocol SUInstallationConstraintMonitor, OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

#import <Foundation/Foundation.h>

#import "SUDownload.h"

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SUDownload *_download;
    NSUInteger _representedConstraints;
    id<SUInstallationConstraintMonitorDelegate> *_queue_delegate;
}


@property (nonatomic) NSObject<SUInstallationConstraintMonitorDelegate> *delegate;
@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly, nonatomic) NSUInteger representedConstraints;
@property (readonly, nonatomic) NSUInteger unsatisfiedConstraints;


-(BOOL)isSatisfied;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withRepresentedInstallationConstraints:(NSUInteger)arg1 andDownload:(id)arg2 ;
-(void)dealloc;


@end


#endif