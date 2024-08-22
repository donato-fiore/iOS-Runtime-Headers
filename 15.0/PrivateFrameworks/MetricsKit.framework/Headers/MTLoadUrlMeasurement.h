// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLOADURLMEASUREMENT_H
#define MTLOADURLMEASUREMENT_H

@class NSArray, NSString;
@protocol MTLoadUrlMeasurementData;


#import "MTPerfBaseMeasurement.h"

@interface MTLoadUrlMeasurement : MTPerfBaseMeasurement <MTLoadUrlMeasurementData>



@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)mark:(id)arg0 ;
-(void)mark:(id)arg0 date:(id)arg1 ;
-(void)mark:(id)arg0 time:(NSInteger)arg1 ;
-(void)setConnectionReused:(BOOL)arg0 ;
-(void)setDnsServersIPAddresses:(id)arg0 ;
-(void)setEdgeNodeCacheStatus:(id)arg0 ;
-(void)setRedirectCount:(NSUInteger)arg0 ;
-(void)setRequestUrl:(id)arg0 ;
-(void)setResolvedIPAddress:(id)arg0 ;
-(void)setStatusCode:(NSUInteger)arg0 ;
-(void)setXpSamplingForced:(BOOL)arg0 ;
-(void)setXpSamplingPercentageUsers:(CGFloat)arg0 ;
-(void)setXpSessionDuration:(NSUInteger)arg0 ;


@end


#endif