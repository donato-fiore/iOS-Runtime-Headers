// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NACAUDIOROUTEBUFFER_H
#define NACAUDIOROUTEBUFFER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NACAudioRouteBuffer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPicked;
@property (readonly, nonatomic) BOOL hasRouteName;
@property (nonatomic) BOOL hasRouteType;
@property (nonatomic) BOOL hasSupportsVolumeControl;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL picked; // ivar: _picked
@property (retain, nonatomic) NSString *routeName; // ivar: _routeName
@property (nonatomic) int routeType; // ivar: _routeType
@property (nonatomic) BOOL supportsVolumeControl; // ivar: _supportsVolumeControl
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)routeTypeAsString:(int)arg0 ;
-(int)StringAsRouteType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif