// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBPERSONALIZATIONBUCKET_H
#define NTPBPERSONALIZATIONBUCKET_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBPersonalizationBucket : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaximum;
@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) NSInteger maximum; // ivar: _maximum
@property (nonatomic) NSInteger minimum; // ivar: _minimum
@property (nonatomic) NSInteger treatmentId; // ivar: _treatmentId


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