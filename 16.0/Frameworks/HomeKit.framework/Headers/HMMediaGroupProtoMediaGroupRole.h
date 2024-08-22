// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPPROTOMEDIAGROUPROLE_H
#define HMMEDIAGROUPPROTOMEDIAGROUPROLE_H

@class PBCodable;
@protocol NSCopying;


#import "HMMediaGroupProtoMediaSystemRoles.h"

@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMediaSystem;
@property (nonatomic) BOOL hasRole;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem; // ivar: _mediaSystem
@property (nonatomic) int role; // ivar: _role


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)roleAsString:(int)arg0 ;
-(int)StringAsRole:(id)arg0 ;
-(void)clearOneofValuesForRole;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif