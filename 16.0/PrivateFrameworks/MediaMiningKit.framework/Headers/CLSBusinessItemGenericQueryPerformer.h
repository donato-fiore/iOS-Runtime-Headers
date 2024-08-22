// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSBUSINESSITEMGENERICQUERYPERFORMER_H
#define CLSBUSINESSITEMGENERICQUERYPERFORMER_H

@class NSString, NSArray;
@protocol CLSQueryPerformerProtocol, GEOMapServiceBatchSpatialLookupTicket, OS_os_log;

#import <Foundation/Foundation.h>

#import "CLSBusinessCategoryCache.h"

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol>



@property (readonly, nonatomic) NSObject<GEOMapServiceBatchSpatialLookupTicket> *businessGenericTicket; // ivar: _businessGenericTicket
@property (readonly, nonatomic) CLSBusinessCategoryCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) NSArray *locationGeoParameters; // ivar: _locationGeoParameters
@property (nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (nonatomic) CGFloat precision; // ivar: _precision
@property (readonly, copy, nonatomic) NSArray *regions; // ivar: _regions
@property (nonatomic) ? statistics; // ivar: _statistics
@property (readonly) Class superclass;


+(CGFloat)defaultPrecision;
+(NSUInteger)numberOfRegionsPerBatch;
+(id)categories;
+(id)queryWithTemplate:(id)arg0 forRegions:(id)arg1 ;
-(BOOL)shouldQueryItemsForRegion:(id)arg0 selectedRegions:(id)arg1 ;
-(NSUInteger)cacheItems:(id)arg0 ;
-(id)init;
-(id)initWithRegions:(id)arg0 categories:(id)arg1 precision:(CGFloat)arg2 ;
-(void)cancel;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg0 ;
-(void)logGeoLookupFailureResult;
-(void)submitWithHandler:(id)arg0 ;


@end


#endif