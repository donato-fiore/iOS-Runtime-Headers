// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSBROWSER_H
#define HSBROWSER_H

@class NSMutableArray, NSString, NSNetServiceBrowser;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate, HSBrowserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>



@property (retain, nonatomic) NSMutableArray *availableLibraries; // ivar: _availableLibraries
@property (readonly, nonatomic) NSInteger browserType; // ivar: _browserType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HSBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID; // ivar: _homeSharingGroupID
@property (retain, nonatomic) NSMutableArray *librariesPendingRemoval; // ivar: _librariesPendingRemoval
@property (retain, nonatomic) NSMutableArray *resolvingServices; // ivar: _resolvingServices
@property (retain, nonatomic) NSNetServiceBrowser *serviceBrowser; // ivar: _serviceBrowser
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceBrowserQueue; // ivar: _serviceBrowserQueue
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)homeSharingBrowserWithGroupID:(id)arg0 ;
-(id)initWithBrowserType:(NSInteger)arg0 groupID:(id)arg1 ;
-(void)_removalTimerFired:(id)arg0 ;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif