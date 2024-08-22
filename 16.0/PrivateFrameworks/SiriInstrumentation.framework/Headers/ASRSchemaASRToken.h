// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRTOKEN_H
#define ASRSCHEMAASRTOKEN_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRToken : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL appendSpaceAfter; // ivar: _appendSpaceAfter
@property (nonatomic) int confidence; // ivar: _confidence
@property (nonatomic) NSUInteger endTimeInNs; // ivar: _endTimeInNs
@property (nonatomic) BOOL hasAppendSpaceAfter;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (nonatomic) BOOL hasIsAutoPunctuation;
@property (nonatomic) BOOL hasIsModifiedByAutoPunctuation;
@property (nonatomic) BOOL hasLinkIndex;
@property (nonatomic) BOOL hasPunctuationText; // ivar: _hasPunctuationText
@property (nonatomic) BOOL hasSilenceStartTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) BOOL isAutoPunctuation; // ivar: _isAutoPunctuation
@property (nonatomic) BOOL isModifiedByAutoPunctuation; // ivar: _isModifiedByAutoPunctuation
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int linkIndex; // ivar: _linkIndex
@property (copy, nonatomic) NSString *punctuationText; // ivar: _punctuationText
@property (nonatomic) NSUInteger silenceStartTimeInNs; // ivar: _silenceStartTimeInNs
@property (nonatomic) NSUInteger startTimeInNs; // ivar: _startTimeInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppendSpaceAfter;
-(void)deleteConfidence;
-(void)deleteEndTimeInNs;
-(void)deleteIsAutoPunctuation;
-(void)deleteIsModifiedByAutoPunctuation;
-(void)deleteLinkIndex;
-(void)deletePunctuationText;
-(void)deleteSilenceStartTimeInNs;
-(void)deleteStartTimeInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif