// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBBINNINGCONFIG_H
#define NTPBBINNINGCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBBinningConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat decreaseConsumptionThreshold; // ivar: _decreaseConsumptionThreshold
@property (nonatomic) int defaultChannelBin; // ivar: _defaultChannelBin
@property (nonatomic) int defaultTopicBin; // ivar: _defaultTopicBin
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSInteger evaluationFrequency; // ivar: _evaluationFrequency
@property (nonatomic) BOOL hasDecreaseConsumptionThreshold;
@property (nonatomic) BOOL hasDefaultChannelBin;
@property (nonatomic) BOOL hasDefaultTopicBin;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL hasEvaluationFrequency;
@property (nonatomic) BOOL hasHistoryLength;
@property (nonatomic) BOOL hasIncreaseConsumptionThreshold;
@property (nonatomic) BOOL hasMinimumArticleCount;
@property (nonatomic) NSInteger historyLength; // ivar: _historyLength
@property (nonatomic) CGFloat increaseConsumptionThreshold; // ivar: _increaseConsumptionThreshold
@property (nonatomic) NSInteger minimumArticleCount; // ivar: _minimumArticleCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif