// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESPEGASUSKITPEGASUSRESPONSE_H
#define POMMESSCHEMAPOMMESPEGASUSKITPEGASUSRESPONSE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESPegasusKitNetworkTimingData.h"

@interface POMMESSchemaPOMMESPegasusKitPegasusResponse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int compressedResponseSizeInKB; // ivar: _compressedResponseSizeInKB
@property (nonatomic) BOOL hasCompressedResponseSizeInKB;
@property (nonatomic) BOOL hasRawResponseSizeInKB;
@property (nonatomic) BOOL hasTimingData; // ivar: _hasTimingData
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int rawResponseSizeInKB; // ivar: _rawResponseSizeInKB
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitNetworkTimingData *timingData; // ivar: _timingData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCompressedResponseSizeInKB;
-(void)deleteRawResponseSizeInKB;
-(void)deleteTimingData;
-(void)writeTo:(id)arg0 ;


@end


#endif