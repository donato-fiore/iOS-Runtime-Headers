// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPROBLEMSTATUSREQUEST_H
#define GEORPPROBLEMSTATUSREQUEST_H

@class PBRequest, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOABSecondPartyPlaceRequestClientMetaData.h"
#import "GEOPDAnalyticMetadata.h"
#import "GEORPClientCapabilities.h"
#import "GEOServicesState.h"
#import "GEORPUserCredentials.h"

@interface GEORPProblemStatusRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    GEOABSecondPartyPlaceRequestClientMetaData *_abAssignmentMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    NSMutableArray *_problemIds;
    GEOServicesState *_servicesState;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) BOOL hasAbAssignmentMetadata;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasServicesState;
@property (readonly, nonatomic) BOOL hasStatusNotificationId;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) NSMutableArray *problemIds;
@property (retain, nonatomic) GEOServicesState *servicesState;
@property (retain, nonatomic) NSString *statusNotificationId;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;


+(BOOL)isValid:(id)arg0 ;
+(Class)problemIdType;
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
-(id)problemIdAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addProblemId:(id)arg0 ;
-(void)clearProblemIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)populateAnalyticsMetadata;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif