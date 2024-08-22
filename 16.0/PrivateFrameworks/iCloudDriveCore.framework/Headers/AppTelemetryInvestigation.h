// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPTELEMETRYINVESTIGATION_H
#define APPTELEMETRYINVESTIGATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "AppTelemetryCiconiaBouncesInvestigation.h"
#import "AppTelemetryCiconiaInvestigation.h"
#import "AppTelemetryQBSInvestigation.h"
#import "AppTelemetryQBSPerformance.h"

@interface AppTelemetryInvestigation : PBCodable <NSCopying>

 {
    NSInteger _errorCode;
    AppTelemetryCiconiaBouncesInvestigation *_bouncesInvestigation;
    AppTelemetryCiconiaInvestigation *_ciconiaInvestigation;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSString *_eventGroupUUID;
    NSString *_itemID;
    NSString *_lastStep;
    NSString *_operationType;
    AppTelemetryQBSInvestigation *_qbsInvestigation;
    AppTelemetryQBSPerformance *_qbsPerformance;
    NSString *_reason;
    NSData *_zoneName;
    BOOL _hasForegroundClients;
    BOOL _isPCSChained;
    BOOL _nonDiscretionary;
    BOOL _sharedZone;
    ? _has;
}


@property (retain, nonatomic) AppTelemetryCiconiaBouncesInvestigation *bouncesInvestigation;
@property (retain, nonatomic) AppTelemetryCiconiaInvestigation *ciconiaInvestigation;
@property (nonatomic) NSInteger errorCode;
@property (retain, nonatomic) NSString *errorDescription;
@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSString *eventGroupUUID;
@property (readonly, nonatomic) BOOL hasBouncesInvestigation;
@property (readonly, nonatomic) BOOL hasCiconiaInvestigation;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (readonly, nonatomic) BOOL hasEventGroupUUID;
@property (nonatomic) BOOL hasForegroundClients;
@property (nonatomic) BOOL hasHasForegroundClients;
@property (nonatomic) BOOL hasIsPCSChained;
@property (readonly, nonatomic) BOOL hasItemID;
@property (readonly, nonatomic) BOOL hasLastStep;
@property (nonatomic) BOOL hasNonDiscretionary;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (readonly, nonatomic) BOOL hasQbsInvestigation;
@property (readonly, nonatomic) BOOL hasQbsPerformance;
@property (readonly, nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSharedZone;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (nonatomic) BOOL isPCSChained;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *lastStep;
@property (nonatomic) BOOL nonDiscretionary;
@property (retain, nonatomic) NSString *operationType;
@property (retain, nonatomic) AppTelemetryQBSInvestigation *qbsInvestigation;
@property (retain, nonatomic) AppTelemetryQBSPerformance *qbsPerformance;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL sharedZone;
@property (retain, nonatomic) NSData *zoneName;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif