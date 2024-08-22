// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDBETAENROLLMENTHELPERDAEMON_H
#define SDBETAENROLLMENTHELPERDAEMON_H

@class NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, SDBetaEnrollmentHelperDaemonInterface;

#import <Foundation/Foundation.h>


@interface SDBetaEnrollmentHelperDaemon : NSObject <NSXPCListenerDelegate, SDBetaEnrollmentHelperDaemonInterface>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)addFBAHelpMenu:(id)arg0 ;
-(void)addFBASymlink:(id)arg0 ;
-(void)isPreReleaseInstallationAllowed:(id)arg0 ;
-(void)removeFBAHelpMenu:(id)arg0 ;
-(void)start;


@end


#endif