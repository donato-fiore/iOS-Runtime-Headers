// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYERRORINFO_H
#define SYERRORINFO_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface SYErrorInfo : PBCodable <NSCopying>



@property (nonatomic) int code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NSData *userInfo; // ivar: _userInfo


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)_usefulDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithError:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif