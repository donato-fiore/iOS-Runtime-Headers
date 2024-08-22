// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAMETRICSDETECTION_H
#define TAMETRICSDETECTION_H

@class NSString;
@protocol TAMetricsProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAGeneralDetectionMetrics.h"
#import "TASPAdvertisement.h"
#import "TASingleVisitDetectionMetrics.h"
#import "TAVisitDetectionMetrics.h"

@interface TAMetricsDetection : NSObject <TAMetricsProtocol, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger detectionType; // ivar: _detectionType
@property (readonly, nonatomic) TAGeneralDetectionMetrics *generalDetectionMetrics; // ivar: _generalDetectionMetrics
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, nonatomic) TASingleVisitDetectionMetrics *singleVisitDetectionMetrics; // ivar: _singleVisitDetectionMetrics
@property (readonly) Class superclass;
@property (readonly, nonatomic) TAVisitDetectionMetrics *visitDetectionMetrics; // ivar: _visitDetectionMetrics


+(BOOL)supportsSecureCoding;
+(id)convertTADetectionTypeToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)getMetricsCollectionType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectionType:(NSUInteger)arg0 visitDetectionMetrics:(id)arg1 generalDetectionMetrics:(id)arg2 singleVisitDetectionMetrics:(id)arg3 latestAdvertisement:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif