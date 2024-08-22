// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVAGENTPREVIEWSERVICECLIENTCONNECTION_H
#define UVAGENTPREVIEWSERVICECLIENTCONNECTION_H

@class NSString;
@protocol UVBSClientConnection;


#import "UVBSConnection.h"

@interface UVAgentPreviewServiceClientConnection : UVBSConnection <UVBSClientConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createWithEndpoint:(id)arg0 forScene:(id)arg1 error:(*id)arg2 ;
-(void)activateWithInterfaceTarget:(id)arg0 ;


@end


#endif