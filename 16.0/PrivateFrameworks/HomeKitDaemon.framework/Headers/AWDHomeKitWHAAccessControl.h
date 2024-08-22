// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITWHAACCESSCONTROL_H
#define AWDHOMEKITWHAACCESSCONTROL_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitWHAAccessControl : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsP2PEnabled;
@property (nonatomic) BOOL hasIsPasswordSet;
@property (nonatomic) BOOL hasPrivilegeLevel;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isP2PEnabled; // ivar: _isP2PEnabled
@property (nonatomic) BOOL isPasswordSet; // ivar: _isPasswordSet
@property (nonatomic) int privilegeLevel; // ivar: _privilegeLevel
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)privilegeLevelAsString:(int)arg0 ;
-(int)StringAsPrivilegeLevel:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif