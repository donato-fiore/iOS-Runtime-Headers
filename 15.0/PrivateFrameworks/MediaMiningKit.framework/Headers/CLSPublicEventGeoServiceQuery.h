// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSPUBLICEVENTGEOSERVICEQUERY_H
#define CLSPUBLICEVENTGEOSERVICEQUERY_H

@class NSString, NSDictionary, NSArray;
@protocol CLSQueryProtocol, OS_dispatch_queue, GEOMapServiceSpatialEventLookupTicket;

#import <Foundation/Foundation.h>


@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *geoQueue; // ivar: _geoQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *invalidationTokens; // ivar: _invalidationTokens
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) NSDictionary *parametersByTimeLocationTupleIdentifier; // ivar: _parametersByTimeLocationTupleIdentifier
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (retain, nonatomic) NSDictionary *resolvedPublicEventsForTimeLocationTuples; // ivar: _resolvedPublicEventsForTimeLocationTuples
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOMapServiceSpatialEventLookupTicket> *ticket; // ivar: _ticket
@property (readonly, nonatomic) NSArray *timeLocationTuples; // ivar: _timeLocationTuples


+(NSUInteger)maximumBatchSize;
-(id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg0 ;
-(id)_publicEventsForGeoEvent:(id)arg0 matchingParameters:(id)arg1 ;
-(id)initWithTimeLocationTuples:(id)arg0 radius:(CGFloat)arg1 ;
-(void)cancel;
-(void)prepareForRetry;
-(void)submitWithHandler:(id)arg0 ;


@end


#endif