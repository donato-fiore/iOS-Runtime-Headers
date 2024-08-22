// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPPROBLEMREQUEST_H
#define GEORPPROBLEMREQUEST_H

@class PBRequest, PBDataReader, NSData, NSString;
@protocol NSCopying;


#import "GEOPDAnalyticMetadata.h"
#import "GEORPClientCapabilities.h"
#import "GEOPDClientMetadata.h"
#import "GEORPDebugSettings.h"
#import "GEORPProblem.h"
#import "GEORPUserCredentials.h"

@interface GEORPProblemRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_inputLanguage;
    NSString *_problemUuid;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (readonly, nonatomic) BOOL hasProblem;
@property (readonly, nonatomic) BOOL hasProblemUuid;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *inputLanguage;
@property (retain, nonatomic) GEORPProblem *problem;
@property (retain, nonatomic) NSString *problemUuid;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (retain, nonatomic) NSString *userEmail;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)requestTypeCode;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif