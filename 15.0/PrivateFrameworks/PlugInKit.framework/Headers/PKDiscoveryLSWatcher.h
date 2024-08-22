// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYLSWATCHER_H
#define PKDISCOVERYLSWATCHER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>

#import "PKDiscoveryDriver.h"

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) PKDiscoveryDriver *wdriver; // ivar: _wdriver


-(id)initWithDriver:(id)arg0 ;
-(void)pluginsDidInstall:(id)arg0 ;
-(void)pluginsDidUninstall:(id)arg0 ;
-(void)stopUpdates;
-(void)update;
-(void)updateWithUninstalledProxies:(id)arg0 ;


@end


#endif