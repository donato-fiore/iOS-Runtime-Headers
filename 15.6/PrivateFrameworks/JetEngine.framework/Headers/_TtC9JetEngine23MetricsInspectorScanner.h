// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9JETENGINE23METRICSINSPECTORSCANNER_H
#define _TTC9JETENGINE23METRICSINSPECTORSCANNER_H

@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9JetEngine23MetricsInspectorScanner : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    ? serviceBrowser;
    ? stateLock;
    ? foundServices;
}




-(id)init;
-(void)dealloc;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg0 ;
-(void)netServiceBrowserWillSearch:(id)arg0 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;


@end


#endif