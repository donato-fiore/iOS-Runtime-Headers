// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCIADCONFIGURATION_H
#define FCIADCONFIGURATION_H

@class NTPBIAdConfig, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface FCIAdConfiguration : NSObject {
    NTPBIAdConfig *_pbConfig;
    NSDictionary *_configDict;
}


@property (readonly, nonatomic) NSDictionary *adStatusConditionsByType; // ivar: _adStatusConditionsByType
@property (readonly, nonatomic) CGFloat articleNumberOfViewportsBetweenAds; // ivar: _articleNumberOfViewportsBetweenAds
@property (readonly, nonatomic) CGFloat feedNumberOfViewportsBetweenAds; // ivar: _feedNumberOfViewportsBetweenAds
@property (readonly, nonatomic) NSArray *iAdSegmentIDs; // ivar: _iAdSegmentIDs
@property (readonly, nonatomic, getter=isPreRequestPolicyValidationEnabled) BOOL preRequestPolicyValidationEnabled; // ivar: _preRequestPolicyValidationEnabled
@property (readonly, nonatomic, getter=areSegmentsEnabled) BOOL segmentsEnabled; // ivar: _segmentsEnabled
@property (readonly, nonatomic) NSInteger segmentsHistoryWindowInterval; // ivar: _segmentsHistoryWindowInterval
@property (readonly, nonatomic) CGFloat segmentsMinRelativeRate; // ivar: _segmentsMinRelativeRate
@property (readonly, nonatomic) NSInteger segmentsMinimumArticleCount; // ivar: _segmentsMinimumArticleCount
@property (readonly, nonatomic) NSInteger segmentsMinimumEventCount; // ivar: _segmentsMinimumEventCount
@property (readonly, nonatomic) NSInteger segmentsSubmissionFrequency; // ivar: _segmentsSubmissionFrequency
@property (readonly, nonatomic) CGFloat segmentsThreshold; // ivar: _segmentsThreshold


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithPBIAdConfig:(id)arg0 ;


@end


#endif