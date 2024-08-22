// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIORECENTSTATIONSREQUEST_H
#define RADIORECENTSTATIONSREQUEST_H

@class SSURLConnectionRequest, NSString;


#import "RadioRequest.h"
#import "RadioStation.h"

@interface RadioRecentStationsRequest : RadioRequest {
    SSURLConnectionRequest *_request;
    RadioStation *_currentStation;
    NSString *_currentStationStringID;
}


@property (nonatomic) BOOL shouldGroupResponses; // ivar: _shouldGroupResponses
@property (nonatomic) NSUInteger stationCount; // ivar: _stationCount


-(id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg0 ;
-(id)_recentStationsResponseWithConnectionResponse:(id)arg0 returningError:(*id)arg1 ;
-(id)initWithCurrentStation:(id)arg0 ;
-(id)initWithCurrentStationStringID:(id)arg0 ;
-(void)_configureRequestPropertiesForCaching:(id)arg0 returningCacheKey:(*id)arg1 ;
-(void)cancel;
-(void)getCachedRecentStationsResponseWithCompletionHandler:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif