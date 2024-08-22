// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTSECTIONPRESENCEPERSONALIZATIONABSOLUTEREQUEST_H
#define NTSECTIONPRESENCEPERSONALIZATIONABSOLUTEREQUEST_H

@class FCPersonalizationFeature;
@protocol NSCopying, NTAbsolutePersonalizedSectionPresenceConfig;

#import <Foundation/Foundation.h>


@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig; // ivar: _absolutePresenceConfig
@property (copy, nonatomic) FCPersonalizationFeature *feature; // ivar: _feature
@property (nonatomic) CGFloat featureClickPrior; // ivar: _featureClickPrior
@property (nonatomic) CGFloat featureImpressionPrior; // ivar: _featureImpressionPrior


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif