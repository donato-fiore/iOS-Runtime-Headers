// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLDIAGNOSTICSSERVICE_H
#define GTMTLDIAGNOSTICSSERVICE_H

@class NSMutableDictionary;
@protocol GTMTLDiagnosticsService, GTMTLDiagnosticsServiceObserver, OS_os_log;

#import <Foundation/Foundation.h>


@interface GTMTLDiagnosticsService : NSObject <GTMTLDiagnosticsService, GTMTLDiagnosticsServiceObserver>

 {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_observerIdToObserver;
    NSUInteger _nextObserverId;
}




-(NSUInteger)registerObserver:(id)arg0 ;
-(id)init;
-(void)deregisterObserver:(NSUInteger)arg0 ;
-(void)notifyCommandBufferIssue:(id)arg0 ;
-(void)notifyDiagnosticsIssue:(id)arg0 ;
-(void)raiseRuntimeIssue:(id)arg0 ;


@end


#endif