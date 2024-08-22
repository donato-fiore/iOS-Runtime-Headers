// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BAAGENTSYSTEMPROXY_H
#define BAAGENTSYSTEMPROXY_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BAAgentSystemProxy : NSObject {
    NSXPCConnection *_connection;
}




-(BOOL)applicationWasInstalledWithIdentifier:(id)arg0 bundleURLPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)applicationWasUpdatedWithIdentifier:(id)arg0 bundleURLPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)grantedInitialBackgroundActivityWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)runDebugCommand:(id)arg0 ;
-(void)triggerPeriodic:(id)arg0 ;


@end


#endif