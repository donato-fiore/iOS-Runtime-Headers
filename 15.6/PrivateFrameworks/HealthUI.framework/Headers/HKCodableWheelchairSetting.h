// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEWHEELCHAIRSETTING_H
#define HKCODABLEWHEELCHAIRSETTING_H

@class PBCodable;
@protocol NSCopying;



@interface HKCodableWheelchairSetting : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsUsingWheelchair;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) BOOL isUsingWheelchair; // ivar: _isUsingWheelchair
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion


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