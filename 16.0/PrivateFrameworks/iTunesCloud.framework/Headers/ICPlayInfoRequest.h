// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPLAYINFOREQUEST_H
#define ICPLAYINFOREQUEST_H

@class NSNumber, NSData, NSString, NSArray;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICPlayInfoResponse.h"

@interface ICPlayInfoRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICPlayInfoResponse *_response;
}


@property (copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (copy, nonatomic) NSData *SICData; // ivar: _SICData
@property (copy, nonatomic) NSNumber *contentIdentifier; // ivar: _contentIdentifier
@property (copy, nonatomic) NSString *playerGUID; // ivar: _playerGUID
@property (copy, nonatomic) NSArray *sinfs; // ivar: _sinfs
@property (copy, nonatomic) NSString *subscriptionPlaybackType; // ivar: _subscriptionPlaybackType


-(BOOL)_hasRentalInfo;
-(id)_getSinfParamValue:(int)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)execute;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif