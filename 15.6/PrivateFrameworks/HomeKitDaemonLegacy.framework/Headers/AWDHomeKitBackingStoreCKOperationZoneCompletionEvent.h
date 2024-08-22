// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITBACKINGSTORECKOPERATIONZONECOMPLETIONEVENT_H
#define AWDHOMEKITBACKINGSTORECKOPERATIONZONECOMPLETIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitBackingStoreCKOperationZoneCompletionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int containerType; // ivar: _containerType
@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) BOOL hasDidSucceed;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasZoneType;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int zoneType; // ivar: _zoneType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)zoneTypeAsString:(int)arg0 ;
-(int)StringAsContainerType:(id)arg0 ;
-(int)StringAsZoneType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif