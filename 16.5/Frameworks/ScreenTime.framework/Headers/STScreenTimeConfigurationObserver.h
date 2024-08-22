// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSCREENTIMECONFIGURATIONOBSERVER_H
#define STSCREENTIMECONFIGURATIONOBSERVER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "STScreenTimeConfiguration.h"

@interface STScreenTimeConfigurationObserver : NSObject

@property (retain) STScreenTimeConfiguration *configuration; // ivar: _configuration
@property int notificationToken; // ivar: _notificationToken
@property (readonly) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithUpdateQueue:(id)arg0 ;
-(void)_requestConfiguration;
-(void)_updateWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;


@end


#endif