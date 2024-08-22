// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBSUBSCRIPTIONDETECTIONSCREENVIEW_H
#define NTPBSUBSCRIPTIONDETECTIONSCREENVIEW_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int countOfSubscriptionsDetected; // ivar: _countOfSubscriptionsDetected
@property (nonatomic) BOOL hasCountOfSubscriptionsDetected;


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