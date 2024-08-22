// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVNSURLPROTOCOLREQUEST_H
#define AVNSURLPROTOCOLREQUEST_H



#import "AVAssetCustomURLRequest.h"
#import "AVAssetCustomURLBridgeForNSURLProtocol.h"

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {
    *_CFURLConnection _connection;
    *__CFError _error;
}


@property (weak, nonatomic) AVAssetCustomURLBridgeForNSURLProtocol *bridge; // ivar: _bridge
@property (nonatomic) *_CFURLConnection connection;


-(void)dealloc;


@end


#endif