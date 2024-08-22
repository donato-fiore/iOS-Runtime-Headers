// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRINTERMEDIATEUTTERANCEINFOTIER1_H
#define ASRSCHEMAASRINTERMEDIATEUTTERANCEINFOTIER1_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRIntermediateUtteranceInfoTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPhoneticMatchInput; // ivar: _hasPhoneticMatchInput
@property (nonatomic) BOOL hasPhoneticMatchOutput; // ivar: _hasPhoneticMatchOutput
@property (nonatomic) BOOL hasUnrepairedPostItn; // ivar: _hasUnrepairedPostItn
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *phoneticMatchInput; // ivar: _phoneticMatchInput
@property (copy, nonatomic) NSString *phoneticMatchOutput; // ivar: _phoneticMatchOutput
@property (copy, nonatomic) NSString *unrepairedPostItn; // ivar: _unrepairedPostItn


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif