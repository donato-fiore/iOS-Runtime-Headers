// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAENROLLEDUSERSTATE_H
#define SISCHEMAENROLLEDUSERSTATE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaPersonalization.h"

@interface SISchemaEnrolledUserState : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPersonalization; // ivar: _hasPersonalization
@property (nonatomic) BOOL hasSiriLinkedSpeechID; // ivar: _hasSiriLinkedSpeechID
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaPersonalization *personalization; // ivar: _personalization
@property (copy, nonatomic) NSString *siriLinkedSpeechID; // ivar: _siriLinkedSpeechID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif