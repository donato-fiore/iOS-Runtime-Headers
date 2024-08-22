// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAUEIDICTATIONDISCOVERYTOOLTIPSHOWN_H
#define SISCHEMAUEIDICTATIONDISCOVERYTOOLTIPSHOWN_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUEIDictationDiscoveryToolTipShown : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasEmoji; // ivar: _hasEmoji
@property (nonatomic) BOOL hasHasEmoji;
@property (nonatomic) BOOL hasToolTipShown;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int toolTipShown; // ivar: _toolTipShown


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasEmoji;
-(void)deleteToolTipShown;
-(void)writeTo:(id)arg0 ;


@end


#endif