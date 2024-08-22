// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMAMENTIONRESOLVERSPANDATA_H
#define NLXSCHEMAMENTIONRESOLVERSPANDATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaMentionResolverSpanData : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasJointScore;
@property (nonatomic) BOOL hasModelScore;
@property (nonatomic) CGFloat jointScore; // ivar: _jointScore
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat modelScore; // ivar: _modelScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteJointScore;
-(void)deleteModelScore;
-(void)writeTo:(id)arg0 ;


@end


#endif