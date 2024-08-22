// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPPOITRIGGEREVENT_H
#define CLPPOITRIGGEREVENT_H

@class PBCodable;
@protocol NSCopying;



@interface CLPPoiTriggerEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasProviderIdentifier;
@property (nonatomic) BOOL hasTriggerSubType;
@property (nonatomic) BOOL hasTriggerTimestamp;
@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (nonatomic) int providerIdentifier; // ivar: _providerIdentifier
@property (nonatomic) int triggerSubType; // ivar: _triggerSubType
@property (nonatomic) CGFloat triggerTimestamp; // ivar: _triggerTimestamp
@property (nonatomic) int triggerType; // ivar: _triggerType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)triggerTypeAsString:(int)arg0 ;
-(int)StringAsTriggerType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif