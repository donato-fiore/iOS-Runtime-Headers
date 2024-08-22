// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNEWSPERSONALIZATIONFEATURECONFIGURATION_H
#define FCNEWSPERSONALIZATIONFEATURECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationFeatureConfiguration : NSObject

@property (nonatomic) NSInteger articleLengthLongThreshold; // ivar: _articleLengthLongThreshold
@property (nonatomic) NSInteger articleLengthMediumThreshold; // ivar: _articleLengthMediumThreshold
@property (nonatomic) NSInteger publisherTopicPairPublisherEventCountThreshold; // ivar: _publisherTopicPairPublisherEventCountThreshold
@property (nonatomic) NSInteger publisherTopicPairTopicEventCountThreshold; // ivar: _publisherTopicPairTopicEventCountThreshold


-(id)initWithDictionary:(id)arg0 ;


@end


#endif