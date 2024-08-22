// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLESYNCANCHORRANGE_H
#define HDCODABLESYNCANCHORRANGE_H

@class PBCodable;
@protocol NSCopying;


#import "HDCodableEntityIdentifier.h"

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger endAnchor; // ivar: _endAnchor
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (nonatomic) NSInteger entityType; // ivar: _entityType
@property (nonatomic) BOOL hasEndAnchor;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) BOOL hasStartAnchor;
@property (nonatomic) NSInteger startAnchor; // ivar: _startAnchor


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