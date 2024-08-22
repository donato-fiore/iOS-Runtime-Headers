// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYTOKENINFO_H
#define NSPPRIVACYPROXYTOKENINFO_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *proxyURL; // ivar: _proxyURL
@property (retain, nonatomic) NSData *tokenKeyID; // ivar: _tokenKeyID
@property (retain, nonatomic) NSMutableArray *unactivatedTokenLists; // ivar: _unactivatedTokenLists
@property (retain, nonatomic) NSString *vendor; // ivar: _vendor


+(Class)unactivatedTokenListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)unactivatedTokenListAtIndex:(NSUInteger)arg0 ;
-(void)addUnactivatedTokenList:(id)arg0 ;
-(void)clearUnactivatedTokenLists;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif