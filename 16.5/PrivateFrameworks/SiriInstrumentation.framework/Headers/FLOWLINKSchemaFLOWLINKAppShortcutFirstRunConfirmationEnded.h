// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWLINKSCHEMAFLOWLINKAPPSHORTCUTFIRSTRUNCONFIRMATIONENDED_H
#define FLOWLINKSCHEMAFLOWLINKAPPSHORTCUTFIRSTRUNCONFIRMATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsUserResponseAffirmative;
@property (nonatomic) BOOL isUserResponseAffirmative; // ivar: _isUserResponseAffirmative
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsUserResponseAffirmative;
-(void)writeTo:(id)arg0 ;


@end


#endif