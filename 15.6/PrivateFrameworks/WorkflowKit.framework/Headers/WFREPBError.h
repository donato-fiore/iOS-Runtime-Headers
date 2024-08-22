// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREPBERROR_H
#define WFREPBERROR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFREPBError : PBCodable <NSCopying>



@property (nonatomic) NSInteger code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedFailureReason;
@property (retain, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) NSString *localizedFailureReason; // ivar: _localizedFailureReason


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