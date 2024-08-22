// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMASENDWITHOUTCONFIRMATION_H
#define SISCHEMASENDWITHOUTCONFIRMATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaSendWithoutConfirmation : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL hasIsEnabledForCarPlay;
@property (nonatomic) BOOL hasIsEnabledForHeadphones;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isEnabledForCarPlay; // ivar: _isEnabledForCarPlay
@property (nonatomic) BOOL isEnabledForHeadphones; // ivar: _isEnabledForHeadphones
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsEnabled;
-(void)deleteIsEnabledForCarPlay;
-(void)deleteIsEnabledForHeadphones;
-(void)writeTo:(id)arg0 ;


@end


#endif