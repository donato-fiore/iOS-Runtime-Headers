// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEECGSAMPLE_H
#define HDCODABLEECGSAMPLE_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat averageHeartRateInBPM; // ivar: _averageHeartRateInBPM
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAverageHeartRateInBPM;
@property (nonatomic) BOOL hasPrivateClassification;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasSymptomsStatus;
@property (readonly, nonatomic) BOOL hasVoltagePayload;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger privateClassification; // ivar: _privateClassification
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;
@property (nonatomic) NSInteger symptomsStatus; // ivar: _symptomsStatus
@property (retain, nonatomic) NSData *voltagePayload; // ivar: _voltagePayload


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif