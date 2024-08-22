// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYTOKENACTIVATIONRESPONSE_H
#define NSPPRIVACYPROXYTOKENACTIVATIONRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activatedTokenLists; // ivar: _activatedTokenLists
@property (nonatomic) BOOL hasTokenExpiryTimestamp;
@property (nonatomic) NSUInteger tokenExpiryTimestamp; // ivar: _tokenExpiryTimestamp


+(Class)activatedTokenListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activatedTokenListAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addActivatedTokenList:(id)arg0 ;
-(void)clearActivatedTokenLists;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif