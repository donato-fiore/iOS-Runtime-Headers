// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSCHEMATTSAUDIOINTERFACE_H
#define TTSSCHEMATTSAUDIOINTERFACE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasProductId; // ivar: _hasProductId
@property (nonatomic) BOOL hasVendorId; // ivar: _hasVendorId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productId; // ivar: _productId
@property (copy, nonatomic) NSString *vendorId; // ivar: _vendorId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteProductId;
-(void)deleteVendorId;
-(void)writeTo:(id)arg0 ;


@end


#endif