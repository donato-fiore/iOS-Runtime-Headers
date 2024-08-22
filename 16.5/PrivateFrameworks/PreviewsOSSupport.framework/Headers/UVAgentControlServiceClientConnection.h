// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UVAGENTCONTROLSERVICECLIENTCONNECTION_H
#define UVAGENTCONTROLSERVICECLIENTCONNECTION_H

@class NSString;
@protocol UVBSClientConnection;


#import "UVBSConnection.h"

@interface UVAgentControlServiceClientConnection : UVBSConnection <UVBSClientConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createWithEndpoint:(id)arg0 error:(*id)arg1 ;
-(void)activateWithInterfaceTarget:(id)arg0 ;


@end


#endif