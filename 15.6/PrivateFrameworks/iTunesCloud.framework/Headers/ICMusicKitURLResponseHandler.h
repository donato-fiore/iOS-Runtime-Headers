// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICKITURLRESPONSEHANDLER_H
#define ICMUSICKITURLRESPONSEHANDLER_H



#import "ICURLResponseHandler.h"

@interface ICMusicKitURLResponseHandler : ICURLResponseHandler



-(void)_invalidateDeveloperTokenForInitialResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_invalidateUserTokenForInitialResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_updateRequest:(id)arg0 forProcessedResponseOfStoreURLRequest:(id)arg1 ;
-(void)processCompletedResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)processInitialResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif