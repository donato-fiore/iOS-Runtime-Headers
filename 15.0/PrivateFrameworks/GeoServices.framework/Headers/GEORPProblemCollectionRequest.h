// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPROBLEMCOLLECTIONREQUEST_H
#define GEORPPROBLEMCOLLECTIONREQUEST_H

@class PBRequest, PBDataReader, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "GEORPDebugSettings.h"
#import "GEORPUserCredentials.h"
#import "GEOLocation.h"

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_countryCode;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (readonly, nonatomic) BOOL hasHwMachine;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (readonly, nonatomic) BOOL hasOsRelease;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) NSString *hwMachine;
@property (retain, nonatomic) NSString *inputLanguage;
@property (retain, nonatomic) NSString *osRelease;
@property (retain, nonatomic) NSMutableArray *requestElements;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (retain, nonatomic) NSString *userEmail;
@property (retain, nonatomic) GEOLocation *userLocation;


+(BOOL)isValid:(id)arg0 ;
+(Class)requestElementType;
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
-(id)requestElementAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addRequestElement:(id)arg0 ;
-(void)clearRequestElements;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif