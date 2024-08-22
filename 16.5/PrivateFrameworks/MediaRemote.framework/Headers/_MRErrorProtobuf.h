// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRERRORPROTOBUF_H
#define _MRERRORPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface _MRErrorProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedFailureReason;
@property (retain, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) NSString *localizedFailureReason; // ivar: _localizedFailureReason
@property (retain, nonatomic) NSMutableArray *underlyingErrors; // ivar: _underlyingErrors


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)underlyingErrorsAtIndex:(NSUInteger)arg0 ;
-(void)addUnderlyingErrors:(id)arg0 ;
-(void)clearUnderlyingErrors;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif