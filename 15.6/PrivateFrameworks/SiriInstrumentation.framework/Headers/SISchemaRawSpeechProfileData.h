// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMARAWSPEECHPROFILEDATA_H
#define SISCHEMARAWSPEECHPROFILEDATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaRawSpeechProfileData : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasR; // ivar: _hasR
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *r; // ivar: _r


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteR;
-(void)writeTo:(id)arg0 ;


@end


#endif