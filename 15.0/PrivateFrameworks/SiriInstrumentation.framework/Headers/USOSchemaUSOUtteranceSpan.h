// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSCHEMAUSOUTTERANCESPAN_H
#define USOSCHEMAUSOUTTERANCESPAN_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface USOSchemaUSOUtteranceSpan : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) int endMilliseconds; // ivar: _endMilliseconds
@property (nonatomic) unsigned int endUnicodeScalarIndex; // ivar: _endUnicodeScalarIndex
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) BOOL hasEndMilliseconds;
@property (nonatomic) BOOL hasEndUnicodeScalarIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) BOOL hasStartMilliseconds;
@property (nonatomic) BOOL hasStartUnicodeScalarIndex;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int startIndex; // ivar: _startIndex
@property (nonatomic) int startMilliseconds; // ivar: _startMilliseconds
@property (nonatomic) unsigned int startUnicodeScalarIndex; // ivar: _startUnicodeScalarIndex


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif