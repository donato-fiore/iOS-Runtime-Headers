// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RADIOGETFEATUREDSTATIONSREQUEST_H
#define RADIOGETFEATUREDSTATIONSREQUEST_H

@class SSURLConnectionRequest;
@protocol OS_dispatch_queue;


#import "RadioRequest.h"

@interface RadioGetFeaturedStationsRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    SSURLConnectionRequest *_request;
    unsigned int _stationCount;
}


@property (nonatomic) BOOL disableArtworkLoading; // ivar: _disableArtworkLoading
@property (nonatomic) BOOL disableCachedResponses; // ivar: _disableCachedResponses


-(id)_importFeaturedStationWithDictionary:(id)arg0 inModel:(id)arg1 loadArtworkSynchronously:(BOOL)arg2 ;
-(id)_stationDictionariesByApplyingResponse:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithStationCount:(unsigned int)arg0 ;
-(void)cancel;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)startWithFeaturedStationsCompletionHandler:(id)arg0 ;


@end


#endif