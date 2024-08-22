// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALTOKENIZERTOKENIZERREQUEST_H
#define SIRINLUINTERNALTOKENIZERTOKENIZERREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALTOKENIZERTokenizerRequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // ivar: _asrId
@property (readonly, nonatomic) BOOL hasAsrId;
@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSString *text; // ivar: _text


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