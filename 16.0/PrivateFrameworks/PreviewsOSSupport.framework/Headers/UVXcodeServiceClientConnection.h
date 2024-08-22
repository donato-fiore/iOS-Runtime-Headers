// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UVXCODESERVICECLIENTCONNECTION_H
#define UVXCODESERVICECLIENTCONNECTION_H

@class NSString;
@protocol UVBSClientConnection, UVXcodeServiceProtocol;


#import "UVBSConnection.h"

@interface UVXcodeServiceClientConnection : UVBSConnection <UVBSClientConnection, UVXcodeServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)create:(*id)arg0 ;
-(void)activate;
-(void)sendMessage:(id)arg0 reply:(id)arg1 ;


@end


#endif