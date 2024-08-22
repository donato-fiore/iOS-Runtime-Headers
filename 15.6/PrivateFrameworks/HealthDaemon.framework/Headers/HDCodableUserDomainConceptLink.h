// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEUSERDOMAINCONCEPTLINK_H
#define HDCODABLEUSERDOMAINCONCEPTLINK_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HDCodableUserDomainConceptLink : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasTargetUUID;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSData *targetUUID; // ivar: _targetUUID
@property (nonatomic) NSInteger type; // ivar: _type


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