// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDBETAENROLLMENTHELPER_H
#define SDBETAENROLLMENTHELPER_H

@class NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface SDBetaEnrollmentHelper : NSObject <NSXPCListenerDelegate>



@property (retain) NSXPCConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isPreReleaseInstallationAllowed;
-(id)init;
-(id)remoteObjectProxy;
-(void)addFBAHelpMenu:(id)arg0 ;
-(void)addFBASymlink:(id)arg0 ;
-(void)connectToDaemon;
-(void)removeFBAHelpMenu:(id)arg0 ;


@end


#endif