// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPRESPONSEOPERATIONRESULT_H
#define CKDPRESPONSEOPERATIONRESULT_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPResponseOperationResultError.h"

@interface CKDPResponseOperationResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int code; // ivar: _code
@property (retain, nonatomic) CKDPResponseOperationResultError *error; // ivar: _error
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasError;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)codeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCode:(id)arg0 ;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif