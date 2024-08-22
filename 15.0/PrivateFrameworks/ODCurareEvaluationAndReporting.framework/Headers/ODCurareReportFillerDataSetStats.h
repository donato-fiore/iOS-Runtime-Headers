// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODCURAREREPORTFILLERDATASETSTATS_H
#define ODCURAREREPORTFILLERDATASETSTATS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ODCurareReportFillerDataSetStats : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSString *featureValueMax; // ivar: _featureValueMax
@property (retain, nonatomic) NSString *featureValueMean; // ivar: _featureValueMean
@property (retain, nonatomic) NSString *featureValueMin; // ivar: _featureValueMin
@property (retain, nonatomic) NSString *featureValuePercentile10; // ivar: _featureValuePercentile10
@property (retain, nonatomic) NSString *featureValuePercentile25; // ivar: _featureValuePercentile25
@property (retain, nonatomic) NSString *featureValuePercentile50; // ivar: _featureValuePercentile50
@property (retain, nonatomic) NSString *featureValuePercentile75; // ivar: _featureValuePercentile75
@property (retain, nonatomic) NSString *featureValuePercentile90; // ivar: _featureValuePercentile90
@property (retain, nonatomic) NSString *featureValueStd; // ivar: _featureValueStd


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