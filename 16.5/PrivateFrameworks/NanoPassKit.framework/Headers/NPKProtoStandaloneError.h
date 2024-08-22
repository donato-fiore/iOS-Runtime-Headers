// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEERROR_H
#define NPKPROTOSTANDALONEERROR_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandaloneError : PBCodable <NSCopying>



@property (nonatomic) NSInteger code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSMutableArray *userInfos; // ivar: _userInfos


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)userInfosAtIndex:(NSUInteger)arg0 ;
-(void)addUserInfos:(id)arg0 ;
-(void)clearUserInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif