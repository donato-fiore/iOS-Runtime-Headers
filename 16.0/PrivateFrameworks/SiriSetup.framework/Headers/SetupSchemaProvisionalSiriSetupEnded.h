// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SETUPSCHEMAPROVISIONALSIRISETUPENDED_H
#define SETUPSCHEMAPROVISIONALSIRISETUPENDED_H

@class SISchemaInstrumentationMessage, NSData;



@interface SetupSchemaProvisionalSiriSetupEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL dismissed; // ivar: _dismissed
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) BOOL hasSiriEnabled;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL siriEnabled; // ivar: _siriEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteDismissed;
-(void)deleteSiriEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif