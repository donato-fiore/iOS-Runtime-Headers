// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITACCESSORYREADWRITE_H
#define AWDHOMEKITACCESSORYREADWRITE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (nonatomic) int certified; // ivar: _certified
@property (retain, nonatomic) NSMutableArray *characteristics; // ivar: _characteristics
@property (retain, nonatomic) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (nonatomic) unsigned int consecutiveFailureCount; // ivar: _consecutiveFailureCount
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (nonatomic) BOOL hasCertified;
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (nonatomic) BOOL hasConsecutiveFailureCount;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasIsCached;
@property (nonatomic) BOOL hasIsNoeAccessory;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL hasIsRemoteAccessAllowed;
@property (nonatomic) BOOL hasIsRemotelyReachable;
@property (nonatomic) BOOL hasIsResidentAvailable;
@property (nonatomic) BOOL hasIsSentOverNoe;
@property (nonatomic) BOOL hasIsTimedWrite;
@property (nonatomic) BOOL hasIsWrite;
@property (readonly, nonatomic) BOOL hasPrimaryServiceType;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimeElapsedSinceFirstFailure;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (readonly, nonatomic) BOOL hasTransportProtocolVersion;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) BOOL isCached; // ivar: _isCached
@property (nonatomic) BOOL isNoeAccessory; // ivar: _isNoeAccessory
@property (nonatomic) BOOL isRemote; // ivar: _isRemote
@property (nonatomic) BOOL isRemoteAccessAllowed; // ivar: _isRemoteAccessAllowed
@property (nonatomic) BOOL isRemotelyReachable; // ivar: _isRemotelyReachable
@property (nonatomic) BOOL isResidentAvailable; // ivar: _isResidentAvailable
@property (nonatomic) BOOL isSentOverNoe; // ivar: _isSentOverNoe
@property (nonatomic) BOOL isTimedWrite; // ivar: _isTimedWrite
@property (nonatomic) BOOL isWrite; // ivar: _isWrite
@property (retain, nonatomic) NSString *primaryServiceType; // ivar: _primaryServiceType
@property (nonatomic) int source; // ivar: _source
@property (nonatomic) unsigned int timeElapsedSinceFirstFailure; // ivar: _timeElapsedSinceFirstFailure
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *transaction; // ivar: _transaction
@property (retain, nonatomic) NSString *transportProtocolVersion; // ivar: _transportProtocolVersion
@property (nonatomic) int transportType; // ivar: _transportType
@property (nonatomic) unsigned int underlyingErrorCode; // ivar: _underlyingErrorCode
@property (retain, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)certifiedAsString:(int)arg0 ;
-(id)characteristicsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sourceAsString:(int)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsCertified:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)addCharacteristics:(id)arg0 ;
-(void)clearCharacteristics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif