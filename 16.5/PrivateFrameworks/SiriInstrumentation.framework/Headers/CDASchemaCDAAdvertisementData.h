// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDAADVERTISEMENTDATA_H
#define CDASCHEMACDAADVERTISEMENTDATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CDASchemaCDAAdvertisementData : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int audioHash; // ivar: _audioHash
@property (nonatomic) unsigned int confidenceScore; // ivar: _confidenceScore
@property (nonatomic) unsigned int deviceClass; // ivar: _deviceClass
@property (nonatomic) unsigned int deviceGroup; // ivar: _deviceGroup
@property (nonatomic) unsigned int goodnessScore; // ivar: _goodnessScore
@property (nonatomic) BOOL hasAudioHash;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) BOOL hasDeviceGroup;
@property (nonatomic) BOOL hasGoodnessScore;
@property (nonatomic) BOOL hasIsFromContextCollector;
@property (nonatomic) BOOL hasIsSelf;
@property (nonatomic) BOOL hasProductType;
@property (nonatomic) BOOL hasTieBreaker;
@property (nonatomic) BOOL isFromContextCollector; // ivar: _isFromContextCollector
@property (nonatomic) BOOL isSelf; // ivar: _isSelf
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int productType; // ivar: _productType
@property (nonatomic) unsigned int tieBreaker; // ivar: _tieBreaker


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioHash;
-(void)deleteConfidenceScore;
-(void)deleteDeviceClass;
-(void)deleteDeviceGroup;
-(void)deleteGoodnessScore;
-(void)deleteIsFromContextCollector;
-(void)deleteIsSelf;
-(void)deleteProductType;
-(void)deleteTieBreaker;
-(void)writeTo:(id)arg0 ;


@end


#endif