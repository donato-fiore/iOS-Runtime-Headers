// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLDIAGNOSTICSSERVICEXPCPROXY_H
#define GTMTLDIAGNOSTICSSERVICEXPCPROXY_H

@class NSSet, NSMutableDictionary;
@protocol GTMTLDiagnosticsService;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTMTLDiagnosticsServiceXPCProxy : NSObject <GTMTLDiagnosticsService>

 {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)registerObserver:(id)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)deregisterObserver:(NSUInteger)arg0 ;
-(void)raiseRuntimeIssue:(id)arg0 ;


@end


#endif