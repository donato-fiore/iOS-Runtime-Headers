// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPTELEMETRYINVESTIGATION_H
#define APPTELEMETRYINVESTIGATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface AppTelemetryInvestigation : PBCodable <NSCopying>

 {
    NSInteger _errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSString *_itemID;
    NSString *_lastStep;
    NSString *_operationType;
    NSString *_reason;
    NSData *_zoneName;
    BOOL _hasForegroundClients;
    BOOL _isPCSChained;
    BOOL _nonDiscretionary;
    BOOL _sharedZone;
    ? _has;
}


@property (nonatomic) NSInteger errorCode;
@property (retain, nonatomic) NSString *errorDescription;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasForegroundClients;
@property (nonatomic) BOOL hasHasForegroundClients;
@property (nonatomic) BOOL hasIsPCSChained;
@property (readonly, nonatomic) BOOL hasItemID;
@property (readonly, nonatomic) BOOL hasLastStep;
@property (nonatomic) BOOL hasNonDiscretionary;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (readonly, nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSharedZone;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (nonatomic) BOOL isPCSChained;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *lastStep;
@property (nonatomic) BOOL nonDiscretionary;
@property (retain, nonatomic) NSString *operationType;
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