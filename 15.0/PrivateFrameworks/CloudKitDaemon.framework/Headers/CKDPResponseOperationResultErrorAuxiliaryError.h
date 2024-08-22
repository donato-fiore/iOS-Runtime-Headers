// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPRESPONSEOPERATIONRESULTERRORAUXILIARYERROR_H
#define CKDPRESPONSEOPERATIONRESULTERRORAUXILIARYERROR_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSMutableArray *userInfos; // ivar: _userInfos


+(Class)userInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)userInfoAtIndex:(NSUInteger)arg0 ;
-(void)addUserInfo:(id)arg0 ;
-(void)clearUserInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif