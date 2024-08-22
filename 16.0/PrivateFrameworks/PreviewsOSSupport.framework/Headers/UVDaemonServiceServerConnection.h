// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UVDAEMONSERVICESERVERCONNECTION_H
#define UVDAEMONSERVICESERVERCONNECTION_H

@class NSString;
@protocol UVBSServerConnection;


#import "UVBSConnection.h"

@interface UVDaemonServiceServerConnection : UVBSConnection <UVBSServerConnection>



@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)activateWithInterfaceTarget:(id)arg0 ;


@end


#endif