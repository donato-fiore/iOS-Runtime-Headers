// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCDPERROR_H
#define CKCDPERROR_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CKCDPError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int auxiliaryCode; // ivar: _auxiliaryCode
@property (retain, nonatomic) NSString *auxiliaryDomain; // ivar: _auxiliaryDomain
@property (retain, nonatomic) NSMutableArray *auxiliaryUserInfos; // ivar: _auxiliaryUserInfos
@property (nonatomic) int code; // ivar: _code
@property (nonatomic) BOOL hasAuxiliaryCode;
@property (readonly, nonatomic) BOOL hasAuxiliaryDomain;
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasTargetPartition;
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) int targetPartition; // ivar: _targetPartition


+(Class)auxiliaryUserInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)auxiliaryUserInfoAtIndex:(NSUInteger)arg0 ;
-(id)codeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCode:(id)arg0 ;
-(void)addAuxiliaryUserInfo:(id)arg0 ;
-(void)clearAuxiliaryUserInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif