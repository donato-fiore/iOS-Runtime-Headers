// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORBASE_H
#define SUINSTALLATIONCONSTRAINTMONITORBASE_H

@protocol SUInstallationConstraintMonitor, OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

#import <Foundation/Foundation.h>

#import "SUDownload.h"
#import "SUInstallOptions.h"

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SUDownload *_download;
    NSUInteger _representedConstraints;
    SUInstallOptions *_installOptions;
    id<SUInstallationConstraintMonitorDelegate> *_queue_delegate;
}


@property (nonatomic) NSObject<SUInstallationConstraintMonitorDelegate> *delegate;
@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly, retain, nonatomic) SUInstallOptions *installOptions;
@property (readonly, nonatomic) NSUInteger representedConstraints;
@property (readonly, nonatomic) NSUInteger unsatisfiedConstraints;


-(BOOL)isSatisfied;
-(NSUInteger)unsatisfiedConstraintsWithIgnorableConstraints:(NSUInteger)arg0 ;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 andInstallOptions:(id)arg2 ;
-(id)initOnQueue:(id)arg0 withRepresentedInstallationConstraints:(NSUInteger)arg1 andDownload:(id)arg2 ;
-(id)initOnQueue:(id)arg0 withRepresentedInstallationConstraints:(NSUInteger)arg1 andDownload:(id)arg2 andInstallOptions:(id)arg3 ;
-(void)dealloc;


@end


#endif