// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVAGENTPREVIEWNONUISERVICECLIENTCONNECTION_H
#define UVAGENTPREVIEWNONUISERVICECLIENTCONNECTION_H

@class NSString;
@protocol UVBSClientConnection;


#import "UVBSConnection.h"

@interface UVAgentPreviewNonUIServiceClientConnection : UVBSConnection <UVBSClientConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createWithEndpoint:(id)arg0 error:(*id)arg1 ;
-(void)activateWithInterfaceTarget:(id)arg0 ;


@end


#endif