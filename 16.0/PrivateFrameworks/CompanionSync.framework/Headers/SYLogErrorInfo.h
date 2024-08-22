// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYLOGERRORINFO_H
#define SYLOGERRORINFO_H

@class PBCodable, NSError, NSString;
@protocol NSCopying;



@interface SYLogErrorInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) NSError *cocoaError;
@property (nonatomic) NSInteger code; // ivar: _code
@property (retain, nonatomic) NSString *domain; // ivar: _domain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCocoaError:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif