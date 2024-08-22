// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRSAMPLEDAUDIOFILESTORAGEFAILED_H
#define ASRSCHEMAASRSAMPLEDAUDIOFILESTORAGEFAILED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRSampledAudioFileStorageFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain; // ivar: _hasErrorDomain
@property (nonatomic) BOOL hasSampledAudioStorageFailureReason;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorDomain; // ivar: _hasUnderlyingErrorDomain
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int sampledAudioStorageFailureReason; // ivar: _sampledAudioStorageFailureReason
@property (nonatomic) int underlyingErrorCode; // ivar: _underlyingErrorCode
@property (copy, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)deleteErrorDomain;
-(void)deleteSampledAudioStorageFailureReason;
-(void)deleteUnderlyingErrorCode;
-(void)deleteUnderlyingErrorDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif