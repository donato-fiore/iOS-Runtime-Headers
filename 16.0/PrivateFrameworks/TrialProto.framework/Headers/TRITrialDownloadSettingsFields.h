// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITRIALDOWNLOADSETTINGSFIELDS_H
#define TRITRIALDOWNLOADSETTINGSFIELDS_H

@class PBCodable;
@protocol NSCopying;



@interface TRITrialDownloadSettingsFields : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowAnyNetworking; // ivar: _allowAnyNetworking
@property (nonatomic) BOOL allowBattery; // ivar: _allowBattery
@property (nonatomic) int discretionaryBehavior; // ivar: _discretionaryBehavior
@property (nonatomic) BOOL hasAllowAnyNetworking;
@property (nonatomic) BOOL hasAllowBattery;
@property (nonatomic) BOOL hasDiscretionaryBehavior;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)discretionaryBehaviorAsString:(int)arg0 ;
-(int)StringAsDiscretionaryBehavior:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif