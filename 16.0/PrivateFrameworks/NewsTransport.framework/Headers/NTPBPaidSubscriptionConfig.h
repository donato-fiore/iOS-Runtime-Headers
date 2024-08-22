// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPAIDSUBSCRIPTIONCONFIG_H
#define NTPBPAIDSUBSCRIPTIONCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxGroupSizeIPad;
@property (nonatomic) BOOL hasMaxGroupSizeIPhone;
@property (nonatomic) BOOL hasMaxTimesHeadlineInGroup;
@property (nonatomic) NSInteger maxGroupSizeIPad; // ivar: _maxGroupSizeIPad
@property (nonatomic) NSInteger maxGroupSizeIPhone; // ivar: _maxGroupSizeIPhone
@property (nonatomic) NSInteger maxTimesHeadlineInGroup; // ivar: _maxTimesHeadlineInGroup


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