// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSCHEMACAMRESPONSE_H
#define CAMSCHEMACAMRESPONSE_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAMSchemaCAMResponse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (copy, nonatomic) NSString *enforcer; // ivar: _enforcer
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasEnforcer; // ivar: _hasEnforcer
@property (nonatomic) BOOL hasResponseStatusCode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int responseStatusCode; // ivar: _responseStatusCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAction;
-(void)deleteEnforcer;
-(void)deleteResponseStatusCode;
-(void)writeTo:(id)arg0 ;


@end


#endif