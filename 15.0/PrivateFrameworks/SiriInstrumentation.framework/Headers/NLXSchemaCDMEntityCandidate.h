// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLXSCHEMACDMENTITYCANDIDATE_H
#define NLXSCHEMACDMENTITYCANDIDATE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"

@interface NLXSchemaCDMEntityCandidate : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) USOSchemaUSOGraph *entity; // ivar: _entity
@property (nonatomic) BOOL hasEntity; // ivar: _hasEntity
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif