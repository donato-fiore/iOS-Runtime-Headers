// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEAUTHORIZATION_H
#define HDCODABLEAUTHORIZATION_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableAuthorization : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger authorizationMode; // ivar: _authorizationMode
@property (nonatomic) NSInteger authorizationRequest; // ivar: _authorizationRequest
@property (nonatomic) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (nonatomic) BOOL hasAuthorizationMode;
@property (nonatomic) BOOL hasAuthorizationRequest;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) BOOL hasModificationEpoch;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (nonatomic) NSInteger modificationEpoch; // ivar: _modificationEpoch
@property (nonatomic) NSInteger objectType; // ivar: _objectType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)_dataTypeCode;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)_setDataTypeCodeWithObjectType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif