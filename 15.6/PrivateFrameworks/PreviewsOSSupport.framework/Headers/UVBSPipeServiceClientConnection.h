// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVBSPIPESERVICECLIENTCONNECTION_H
#define UVBSPIPESERVICECLIENTCONNECTION_H

@class NSString;
@protocol UVBSClientConnection;


#import "UVBSPipeServiceConnection.h"

@interface UVBSPipeServiceClientConnection : UVBSPipeServiceConnection <UVBSClientConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createAsHost:(*id)arg0 ;
+(id)createWithEndpoint:(id)arg0 error:(*id)arg1 ;


@end


#endif