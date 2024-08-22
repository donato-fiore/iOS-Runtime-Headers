// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYDRIVER_H
#define PKDISCOVERYDRIVER_H

@class NSDictionary, NSString, NSSet;
@protocol PKApplicationWorkspaceObserverProtocol, OS_dispatch_queue, OS_os_activity;

#import <Foundation/Foundation.h>

#import "PKHost.h"
#import "PKDiscoveryLSWatcher.h"

@interface PKDiscoveryDriver : NSObject <PKApplicationWorkspaceObserverProtocol>



@property int annotationNotifyToken; // ivar: _annotationNotifyToken
@property (retain) NSDictionary *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (retain) PKHost *host; // ivar: _host
@property (retain) NSSet *lastResults; // ivar: _lastResults
@property (retain) PKDiscoveryLSWatcher *lsWatcher; // ivar: _lsWatcher
@property (retain) id *mcNotificationToken; // ivar: _mcNotificationToken
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_os_activity> *relatedActivity; // ivar: _relatedActivity
@property (copy) id *report; // ivar: _report
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *sync; // ivar: _sync


-(id)initWithAttributes:(id)arg0 flags:(NSUInteger)arg1 host:(id)arg2 report:(id)arg3 ;
-(void)_performWithPreviousResults:(id)arg0 forceNotify:(BOOL)arg1 uninstalledProxies:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)installWatchers;
-(void)performWithPreviousResults:(id)arg0 forceNotify:(BOOL)arg1 ;
-(void)removeWatchers;


@end


#endif