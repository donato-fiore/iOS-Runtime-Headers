// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMACARDSECTIONKEYBOARDINVOCATIONCONTEXT_H
#define SISCHEMACARDSECTIONKEYBOARDINVOCATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaCardSectionKeyboardInvocationContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL existingText; // ivar: _existingText
@property (nonatomic) BOOL hasExistingText;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (nonatomic) BOOL hasKeyboardPresented;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int keyboardLocale; // ivar: _keyboardLocale
@property (nonatomic) BOOL keyboardPresented; // ivar: _keyboardPresented


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteExistingText;
-(void)deleteKeyboardLocale;
-(void)deleteKeyboardPresented;
-(void)writeTo:(id)arg0 ;


@end


#endif