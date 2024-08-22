// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRSECURECHANNEL_H
#define SPRSECURECHANNEL_H



#import "SPRObject.h"

@interface SPRSecureChannel : SPRObject



+(id)secureChannelWithName:(id)arg0 error:(*id)arg1 ;
+(id)serverResponseBody;
+(id)serverResponseHeader;
-(BOOL)startSessionAsyncWithRequest:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)startSessionAsyncWithRequest:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 error:(*id)arg1 ;
-(id)securingRequest:(id)arg0 error:(*id)arg1 ;
-(id)startDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)startDownloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)startSessionWithRequest:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)startSessionWithRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif