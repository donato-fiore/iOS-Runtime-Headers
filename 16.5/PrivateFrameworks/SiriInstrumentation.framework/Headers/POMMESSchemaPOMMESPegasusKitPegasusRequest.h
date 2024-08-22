// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESPEGASUSKITPEGASUSREQUEST_H
#define POMMESSCHEMAPOMMESPEGASUSKITPEGASUSREQUEST_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESPegasusRequestArguments.h"

@interface POMMESSchemaPOMMESPegasusKitPegasusRequest : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int compressedRequestSizeInKB; // ivar: _compressedRequestSizeInKB
@property (nonatomic) BOOL hasCompressedRequestSizeInKB;
@property (nonatomic) BOOL hasPegasusRequestArguments; // ivar: _hasPegasusRequestArguments
@property (nonatomic) BOOL hasRawRequestSizeInKB;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *pegasusRequestArguments; // ivar: _pegasusRequestArguments
@property (nonatomic) unsigned int rawRequestSizeInKB; // ivar: _rawRequestSizeInKB


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCompressedRequestSizeInKB;
-(void)deletePegasusRequestArguments;
-(void)deleteRawRequestSizeInKB;
-(void)writeTo:(id)arg0 ;


@end


#endif