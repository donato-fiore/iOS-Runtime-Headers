// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RRSCHEMARRGROUPIDENTIFIER_H
#define RRSCHEMARRGROUPIDENTIFIER_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RRSchemaRRGroupIdentifier : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *groupId; // ivar: _groupId
@property (nonatomic) BOOL hasGroupId; // ivar: _hasGroupId
@property (nonatomic) BOOL hasSeq;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int seq; // ivar: _seq


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteGroupId;
-(void)deleteSeq;
-(void)writeTo:(id)arg0 ;


@end


#endif