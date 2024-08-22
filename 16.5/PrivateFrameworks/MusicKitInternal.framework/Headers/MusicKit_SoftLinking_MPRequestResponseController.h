// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPREQUESTRESPONSECONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPREQUESTRESPONSECONTROLLER_H

@class MPRequestResponseController, NSString;
@protocol MPRequestResponseControllerDelegate, MusicKit_SoftLinking_MPCPlayerResponse;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_MPCPlayerRequest.h"

@interface MusicKit_SoftLinking_MPRequestResponseController : NSObject <MPRequestResponseControllerDelegate>

 {
    MPRequestResponseController *_underlyingRequestResponseController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MusicKit_SoftLinking_MPCPlayerRequest *request;
@property (readonly, nonatomic) NSObject<MusicKit_SoftLinking_MPCPlayerResponse> *response;
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (copy, nonatomic) id *shouldRetryFailedRequestWithErrorHandler; // ivar: _shouldRetryFailedRequestWithErrorHandler
@property (readonly) Class superclass;


-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(id)init;
-(id)initWithUnderlyingRequestResponseController:(id)arg0 ;
-(void)beginAutomaticResponseLoading;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)endAutomaticResponseLoading;
-(void)reloadIfNeeded;
-(void)setNeedsReload;
-(void)setNeedsReloadForSignificantRequestChange;


@end


#endif