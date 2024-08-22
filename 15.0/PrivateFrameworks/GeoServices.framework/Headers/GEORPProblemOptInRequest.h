// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPROBLEMOPTINREQUEST_H
#define GEORPPROBLEMOPTINREQUEST_H

@class PBRequest, PBDataReader, NSData, NSString;
@protocol NSCopying;


#import "GEORPUserCredentials.h"

@interface GEORPProblemOptInRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _didOptIn;
    ? _flags;
}


@property (retain, nonatomic) NSData *devicePushToken;
@property (nonatomic) BOOL didOptIn;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (nonatomic) BOOL hasDidOptIn;
@property (readonly, nonatomic) BOOL hasProblemId;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *problemId;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (retain, nonatomic) NSString *userEmail;


+(BOOL)isValid:(id)arg0 ;
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
-(id)initWithSubmissionID:(id)arg0 allowContactBackAtEmailAddress:(id)arg1 traits:(id)arg2 ;
-(id)jsonRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif