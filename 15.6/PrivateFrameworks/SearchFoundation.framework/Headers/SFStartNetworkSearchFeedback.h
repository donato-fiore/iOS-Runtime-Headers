// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSTARTNETWORKSEARCHFEEDBACK_H
#define SFSTARTNETWORKSEARCHFEEDBACK_H

@class NSString, NSDictionary;


#import "SFStartSearchFeedback.h"
#import "SFIndexState.h"

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback

@property (nonatomic) NSUInteger endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (retain, nonatomic) SFIndexState *indexState; // ivar: _indexState
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (copy, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInput:(id)arg0 url:(id)arg1 headers:(id)arg2 triggerEvent:(NSUInteger)arg3 endpoint:(NSUInteger)arg4 ;
-(id)initWithInput:(id)arg0 url:(id)arg1 headers:(id)arg2 triggerEvent:(NSUInteger)arg3 endpoint:(NSUInteger)arg4 queryId:(NSUInteger)arg5 ;
-(id)initWithInput:(id)arg0 url:(id)arg1 headers:(id)arg2 triggerEvent:(NSUInteger)arg3 endpoint:(NSUInteger)arg4 queryId:(NSUInteger)arg5 experimentId:(id)arg6 treatmentId:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif