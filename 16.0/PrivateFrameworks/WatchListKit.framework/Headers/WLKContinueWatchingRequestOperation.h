// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCONTINUEWATCHINGREQUESTOPERATION_H
#define WLKCONTINUEWATCHINGREQUESTOPERATION_H



#import "WLKUTSNetworkRequestOperation.h"
#import "WLKContinueWatchingResponse.h"

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response; // ivar: _response


+(void)donateMediaItems:(id)arg0 ;
-(id)init;
-(id)initWithCaller:(id)arg0 options:(NSInteger)arg1 ;
-(id)initWithQueryParameters:(id)arg0 ;
-(void)processResponse;


@end


#endif