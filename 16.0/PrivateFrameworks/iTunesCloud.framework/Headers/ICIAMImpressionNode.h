// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIAMIMPRESSIONNODE_H
#define ICIAMIMPRESSIONNODE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICIAMImpressionNode : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasImpressionType;
@property (readonly, nonatomic) BOOL hasRecoAlgoId;
@property (retain, nonatomic) NSString *impressionType; // ivar: _impressionType
@property (retain, nonatomic) NSString *recoAlgoId; // ivar: _recoAlgoId


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