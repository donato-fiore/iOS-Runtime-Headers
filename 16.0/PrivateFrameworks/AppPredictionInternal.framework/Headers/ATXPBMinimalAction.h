// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBMINIMALACTION_H
#define ATXPBMINIMALACTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBMinimalAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasParamHash;
@property (nonatomic) NSUInteger paramHash; // ivar: _paramHash


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