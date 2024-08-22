// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSWRMLINKRECOMMENDATIONMETRIC_H
#define IDSWRMLINKRECOMMENDATIONMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSWRMLinkRecommendationMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int infraWiFiState; // ivar: _infraWiFiState
@property (readonly, nonatomic) unsigned int magnetState; // ivar: _magnetState
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned int primaryLinkType; // ivar: _primaryLinkType
@property (readonly, nonatomic) unsigned int recommendedLinkType; // ivar: _recommendedLinkType
@property (readonly) Class superclass;


-(id)initWithRecommendedLinkType:(unsigned int)arg0 primaryLinkType:(unsigned int)arg1 magnetState:(unsigned int)arg2 infraWiFiState:(unsigned int)arg3 ;


@end


#endif