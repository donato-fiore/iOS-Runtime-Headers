// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCAPPLICATIONENVIRONMENTMONITORINGHANDLE_H
#define PDCAPPLICATIONENVIRONMENTMONITORINGHANDLE_H

@class LSApplicationWorkspace, NSString;
@protocol PDCApplicationEnvironmentMonitoringHandle, LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue, PDCApplicationEnvironmentMonitoring;

#import <Foundation/Foundation.h>


@interface PDCApplicationEnvironmentMonitoringHandle : NSObject <PDCApplicationEnvironmentMonitoringHandle, LSApplicationWorkspaceObserverProtocol>

 {
    LSApplicationWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PDCApplicationEnvironmentMonitoring> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWorkspace:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)invalidate;


@end


#endif