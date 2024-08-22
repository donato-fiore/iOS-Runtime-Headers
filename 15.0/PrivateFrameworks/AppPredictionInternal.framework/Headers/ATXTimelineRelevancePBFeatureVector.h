// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTIMELINERELEVANCEPBFEATUREVECTOR_H
#define ATXTIMELINERELEVANCEPBFEATUREVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface ATXTimelineRelevancePBFeatureVector : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger appLaunchCount; // ivar: _appLaunchCount
@property (nonatomic) NSInteger appLaunchPopularity; // ivar: _appLaunchPopularity
@property (nonatomic) BOOL hasAppLaunchCount;
@property (nonatomic) BOOL hasAppLaunchPopularity;


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