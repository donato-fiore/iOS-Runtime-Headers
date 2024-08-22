// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef C2MPERROR_H
#define C2MPERROR_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "C2MPError.h"

@interface C2MPError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (readonly, nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) C2MPError *underlyingError; // ivar: _underlyingError


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