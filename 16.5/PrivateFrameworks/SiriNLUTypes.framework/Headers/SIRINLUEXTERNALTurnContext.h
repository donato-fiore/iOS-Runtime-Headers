// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALTURNCONTEXT_H
#define SIRINLUEXTERNALTURNCONTEXT_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALLegacyNLContext.h"
#import "SIRINLUEXTERNALNLContext.h"

@interface SIRINLUEXTERNALTurnContext : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLegacyNlContext;
@property (readonly, nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALLegacyNLContext *legacyNlContext; // ivar: _legacyNlContext
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext; // ivar: _nlContext


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