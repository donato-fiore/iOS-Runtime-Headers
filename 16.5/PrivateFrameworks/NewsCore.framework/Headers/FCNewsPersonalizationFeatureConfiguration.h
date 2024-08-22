// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPERSONALIZATIONFEATURECONFIGURATION_H
#define FCNEWSPERSONALIZATIONFEATURECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationFeatureConfiguration : NSObject

@property (nonatomic) NSInteger articleLengthLongThreshold; // ivar: _articleLengthLongThreshold
@property (nonatomic) NSInteger articleLengthMediumThreshold; // ivar: _articleLengthMediumThreshold
@property (nonatomic) NSInteger publisherTopicPairPublisherEventCountThreshold; // ivar: _publisherTopicPairPublisherEventCountThreshold
@property (nonatomic) NSInteger publisherTopicPairTopicEventCountThreshold; // ivar: _publisherTopicPairTopicEventCountThreshold


+(NSInteger)defaultArticleLengthLongThreshold;
+(NSInteger)defaultArticleLengthMediumThreshold;
+(NSInteger)defaultPublisherTopicPairPublisherEventCountThreshold;
+(NSInteger)defaultPublisherTopicPairTopicEventCountThreshold;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif