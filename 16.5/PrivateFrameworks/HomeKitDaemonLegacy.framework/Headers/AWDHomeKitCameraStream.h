// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERASTREAM_H
#define AWDHOMEKITCAMERASTREAM_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "AWDHomeKitCameraStreamMessaging.h"
#import "AWDHomeKitCameraIDSSessionSetup.h"
#import "AWDHomeKitCameraStreamConfigure.h"
#import "AWDHomeKitCameraStreamIDSConnSetup.h"
#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitCameraStream : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int certified; // ivar: _certified
@property (retain, nonatomic) AWDHomeKitCameraStreamMessaging *controllerMessaging; // ivar: _controllerMessaging
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasCertified;
@property (readonly, nonatomic) BOOL hasControllerMessaging;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasIdsSessionSetup;
@property (readonly, nonatomic) BOOL hasInitialConfiguration;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL hasIsStreamStarted;
@property (readonly, nonatomic) BOOL hasPhoneIDSConnectionSetup;
@property (nonatomic) BOOL hasReceivedFirstFrame;
@property (readonly, nonatomic) BOOL hasResidentMessaging;
@property (nonatomic) BOOL hasResolutionOnClose;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasStartupDelay;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (readonly, nonatomic) BOOL hasWatchIDSConnectionSetup;
@property (readonly, nonatomic) BOOL hasWatchMessaging;
@property (retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // ivar: _idsSessionSetup
@property (retain, nonatomic) AWDHomeKitCameraStreamConfigure *initialConfiguration; // ivar: _initialConfiguration
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (nonatomic) BOOL isStreamStarted; // ivar: _isStreamStarted
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *phoneIDSConnectionSetup; // ivar: _phoneIDSConnectionSetup
@property (nonatomic) unsigned int receivedFirstFrame; // ivar: _receivedFirstFrame
@property (retain, nonatomic) NSMutableArray *reconfigurations; // ivar: _reconfigurations
@property (retain, nonatomic) AWDHomeKitCameraStreamMessaging *residentMessaging; // ivar: _residentMessaging
@property (retain, nonatomic) NSMutableArray *resolutionCounts; // ivar: _resolutionCounts
@property (nonatomic) int resolutionOnClose; // ivar: _resolutionOnClose
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger startupDelay; // ivar: _startupDelay
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int underlyingErrorCode; // ivar: _underlyingErrorCode
@property (retain, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *watchIDSConnectionSetup; // ivar: _watchIDSConnectionSetup
@property (retain, nonatomic) AWDHomeKitCameraStreamMessaging *watchMessaging; // ivar: _watchMessaging


+(Class)resolutionCountType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)certifiedAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reconfigurationsAtIndex:(NSUInteger)arg0 ;
-(id)resolutionCountAtIndex:(NSUInteger)arg0 ;
-(id)resolutionOnCloseAsString:(int)arg0 ;
-(int)StringAsCertified:(id)arg0 ;
-(int)StringAsResolutionOnClose:(id)arg0 ;
-(void)addReconfigurations:(id)arg0 ;
-(void)addResolutionCount:(id)arg0 ;
-(void)clearReconfigurations;
-(void)clearResolutionCounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif