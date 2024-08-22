// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSLOCATIONQUERYPERFORMER_H
#define CLSLOCATIONQUERYPERFORMER_H

@class NSString, NSArray;
@protocol CLSQueryPerformerProtocol, OS_os_log, GEOMapServiceTicket;

#import <Foundation/Foundation.h>


@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *geoLocations; // ivar: _geoLocations
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (nonatomic) CGFloat precision; // ivar: _precision
@property (readonly, copy, nonatomic) NSArray *regions; // ivar: _regions
@property (nonatomic) ? statistics; // ivar: _statistics
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOMapServiceTicket> *ticket; // ivar: _ticket


+(CGFloat)defaultPrecision;
+(NSUInteger)numberOfRegionsPerBatch;
+(id)queryWithTemplate:(id)arg0 forRegions:(id)arg1 ;
-(BOOL)shouldQueryItemsForRegion:(id)arg0 selectedRegions:(id)arg1 ;
-(NSUInteger)cacheItems:(id)arg0 ;
-(id)init;
-(id)initWithRegions:(id)arg0 precision:(CGFloat)arg1 ;
-(void)cancel;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg0 ;
-(void)logGeoLookupFailureResult;
-(void)submitWithHandler:(id)arg0 ;


@end


#endif