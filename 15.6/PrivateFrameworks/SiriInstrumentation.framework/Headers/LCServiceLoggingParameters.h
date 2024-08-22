// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LCSERVICELOGGINGPARAMETERS_H
#define LCSERVICELOGGINGPARAMETERS_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface LCServiceLoggingParameters : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSData *entropy; // ivar: _entropy
@property (nonatomic) BOOL hasEntropy; // ivar: _hasEntropy
@property (nonatomic) BOOL hasMessageSizeQuotaInBytes;
@property (nonatomic) BOOL hasOptOutOfCompression;
@property (nonatomic) BOOL hasOverrideIntoSamplePopulation;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) BOOL hasRealtimeSamplingRate;
@property (nonatomic) BOOL hasTotalDiskSizeQuotaInBytes;
@property (nonatomic) BOOL hasUploadEndpointURL; // ivar: _hasUploadEndpointURL
@property (nonatomic) BOOL hasUploadSamplingRate;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int messageSizeQuotaInBytes; // ivar: _messageSizeQuotaInBytes
@property (nonatomic) BOOL optOutOfCompression; // ivar: _optOutOfCompression
@property (nonatomic) BOOL overrideIntoSamplePopulation; // ivar: _overrideIntoSamplePopulation
@property (nonatomic) int qos; // ivar: _qos
@property (nonatomic) float realtimeSamplingRate; // ivar: _realtimeSamplingRate
@property (nonatomic) int totalDiskSizeQuotaInBytes; // ivar: _totalDiskSizeQuotaInBytes
@property (copy, nonatomic) NSString *uploadEndpointURL; // ivar: _uploadEndpointURL
@property (nonatomic) float uploadSamplingRate; // ivar: _uploadSamplingRate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEntropy;
-(void)deleteMessageSizeQuotaInBytes;
-(void)deleteOptOutOfCompression;
-(void)deleteOverrideIntoSamplePopulation;
-(void)deleteQos;
-(void)deleteRealtimeSamplingRate;
-(void)deleteTotalDiskSizeQuotaInBytes;
-(void)deleteUploadEndpointURL;
-(void)deleteUploadSamplingRate;
-(void)writeTo:(id)arg0 ;


@end


#endif