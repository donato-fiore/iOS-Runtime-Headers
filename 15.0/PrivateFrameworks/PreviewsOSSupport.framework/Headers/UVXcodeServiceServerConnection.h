// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVXCODESERVICESERVERCONNECTION_H
#define UVXCODESERVICESERVERCONNECTION_H

@class NSString;
@protocol UVBSServerConnection;


#import "UVBSConnection.h"

@interface UVXcodeServiceServerConnection : UVBSConnection <UVBSServerConnection>



@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)activateWithInterfaceTarget:(id)arg0 ;


@end


#endif