// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRSAMPLEDAUDIOFILEENQUEUEFAILED_H
#define ASRSCHEMAASRSAMPLEDAUDIOFILEENQUEUEFAILED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRSampledAudioFileEnqueueFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain; // ivar: _hasErrorDomain
@property (nonatomic) BOOL hasOriginalAsrId; // ivar: _hasOriginalAsrId
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorDomain; // ivar: _hasUnderlyingErrorDomain
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalAsrId; // ivar: _originalAsrId
@property (nonatomic) int underlyingErrorCode; // ivar: _underlyingErrorCode
@property (copy, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif