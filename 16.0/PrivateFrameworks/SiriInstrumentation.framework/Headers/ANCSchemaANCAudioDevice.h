// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANCSCHEMAANCAUDIODEVICE_H
#define ANCSCHEMAANCAUDIODEVICE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface ANCSchemaANCAudioDevice : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasProductIdentifier; // ivar: _hasProductIdentifier
@property (nonatomic) BOOL hasVendorIdentifier; // ivar: _hasVendorIdentifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (copy, nonatomic) NSString *vendorIdentifier; // ivar: _vendorIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteProductIdentifier;
-(void)deleteVendorIdentifier;
-(void)writeTo:(id)arg0 ;


@end


#endif