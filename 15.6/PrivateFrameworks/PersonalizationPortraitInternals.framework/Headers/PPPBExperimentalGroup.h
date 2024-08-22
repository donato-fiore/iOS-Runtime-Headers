// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPPBEXPERIMENTALGROUP_H
#define PPPBEXPERIMENTALGROUP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBExperimentalGroup : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *abGroupIdentifier; // ivar: _abGroupIdentifier
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) BOOL hasAbGroupIdentifier;
@property (readonly, nonatomic) BOOL hasExperimentId;


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