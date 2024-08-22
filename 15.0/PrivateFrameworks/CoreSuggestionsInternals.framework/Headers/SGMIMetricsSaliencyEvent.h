// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSSALIENCYEVENT_H
#define SGMIMETRICSSALIENCYEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SGMIMetricsSaliencyInference.h"
#import "SGMIMetricsSubmodelAgeVector.h"
#import "SGMIMetricsSubmodelOutputVector.h"
#import "SGMIMetricsTrialMetadata.h"

@interface SGMIMetricsSaliencyEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLang;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) BOOL hasSaliencyInference;
@property (nonatomic) BOOL hasSenderConnectionScore;
@property (readonly, nonatomic) BOOL hasSubmodelOutputAge;
@property (readonly, nonatomic) BOOL hasSubmodelOutputVector;
@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *lang; // ivar: _lang
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) NSUInteger messageId; // ivar: _messageId
@property (retain, nonatomic) SGMIMetricsSaliencyInference *saliencyInference; // ivar: _saliencyInference
@property (nonatomic) CGFloat senderConnectionScore; // ivar: _senderConnectionScore
@property (retain, nonatomic) SGMIMetricsSubmodelAgeVector *submodelOutputAge; // ivar: _submodelOutputAge
@property (retain, nonatomic) SGMIMetricsSubmodelOutputVector *submodelOutputVector; // ivar: _submodelOutputVector
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata; // ivar: _trialMetadata
@property (nonatomic) NSUInteger userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif