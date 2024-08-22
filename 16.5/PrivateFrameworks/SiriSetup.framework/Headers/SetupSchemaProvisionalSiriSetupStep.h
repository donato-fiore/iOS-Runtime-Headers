// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SETUPSCHEMAPROVISIONALSIRISETUPSTEP_H
#define SETUPSCHEMAPROVISIONALSIRISETUPSTEP_H

@class SISchemaInstrumentationMessage, NSData;



@interface SetupSchemaProvisionalSiriSetupStep : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasPage;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int page; // ivar: _page


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deletePage;
-(void)writeTo:(id)arg0 ;


@end


#endif