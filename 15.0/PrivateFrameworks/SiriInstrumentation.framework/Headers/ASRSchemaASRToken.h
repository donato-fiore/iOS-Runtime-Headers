// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRTOKEN_H
#define ASRSCHEMAASRTOKEN_H

@class NSData;


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
@property (nonatomic) BOOL hasLinkIndex;
@property (nonatomic) BOOL hasSilenceStartTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int linkIndex; // ivar: _linkIndex
@property (nonatomic) NSUInteger silenceStartTimeInNs; // ivar: _silenceStartTimeInNs
@property (nonatomic) NSUInteger startTimeInNs; // ivar: _startTimeInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif