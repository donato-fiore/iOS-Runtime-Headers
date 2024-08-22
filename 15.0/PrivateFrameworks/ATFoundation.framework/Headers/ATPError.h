// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATPERROR_H
#define ATPERROR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATPError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSInteger domainCode; // ivar: _domainCode
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasDomainCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;


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