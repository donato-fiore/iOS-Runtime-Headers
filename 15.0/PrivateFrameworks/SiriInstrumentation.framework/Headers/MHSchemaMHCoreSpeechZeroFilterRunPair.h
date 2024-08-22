// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHCORESPEECHZEROFILTERRUNPAIR_H
#define MHSCHEMAMHCORESPEECHZEROFILTERRUNPAIR_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHCoreSpeechZeroFilterRunPair : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasZeroRunLength;
@property (nonatomic) BOOL hasZeroRunStartingSample;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger zeroRunLength; // ivar: _zeroRunLength
@property (nonatomic) NSUInteger zeroRunStartingSample; // ivar: _zeroRunStartingSample


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif