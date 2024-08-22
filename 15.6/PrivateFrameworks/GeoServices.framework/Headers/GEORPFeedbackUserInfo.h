// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEEDBACKUSERINFO_H
#define GEORPFEEDBACKUSERINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSString;
@protocol NSCopying;


#import "GEORPAppAttestInfo.h"
#import "GEORPUserCredentials.h"

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAppAttestInfo *_anonUserInfo;
    NSData *_devicePushToken;
    NSString *_preferredEmail;
    GEORPAppAttestInfo *_rolloverInfo;
    NSString *_ugcUserId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPAppAttestInfo *anonUserInfo;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasAnonUserInfo;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (readonly, nonatomic) BOOL hasPreferredEmail;
@property (readonly, nonatomic) BOOL hasRolloverInfo;
@property (readonly, nonatomic) BOOL hasUgcUserId;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *preferredEmail;
@property (retain, nonatomic) GEORPAppAttestInfo *rolloverInfo;
@property (retain, nonatomic) NSString *ugcUserId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (retain, nonatomic) NSString *userEmail;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif