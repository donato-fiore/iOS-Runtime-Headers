// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITCAMERASNAPSHOT_H
#define AWDHOMEKITCAMERASNAPSHOT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "AWDHomeKitCameraSnapshotMessaging.h"
#import "AWDHomeKitCameraIDSSessionSetup.h"
#import "AWDHomeKitCameraSnapshotIDSTransfer.h"
#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitCameraSnapshot : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int certified; // ivar: _certified
@property (retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *controllerMessaging; // ivar: _controllerMessaging
@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL forNotification; // ivar: _forNotification
@property (nonatomic) BOOL hasCertified;
@property (readonly, nonatomic) BOOL hasControllerMessaging;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasForNotification;
@property (readonly, nonatomic) BOOL hasIdsSessionSetup;
@property (nonatomic) BOOL hasIsLocal;
@property (readonly, nonatomic) BOOL hasPhoneToWatch;
@property (nonatomic) BOOL hasReceivedSnapshotFromAccessory;
@property (readonly, nonatomic) BOOL hasResidentMessaging;
@property (readonly, nonatomic) BOOL hasResidentToPhone;
@property (nonatomic) BOOL hasSentSnapshotRequestToAccessory;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (readonly, nonatomic) BOOL hasWatchMessaging;
@property (retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // ivar: _idsSessionSetup
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *phoneToWatch; // ivar: _phoneToWatch
@property (nonatomic) unsigned int receivedSnapshotFromAccessory; // ivar: _receivedSnapshotFromAccessory
@property (retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *residentMessaging; // ivar: _residentMessaging
@property (retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *residentToPhone; // ivar: _residentToPhone
@property (nonatomic) unsigned int sentSnapshotRequestToAccessory; // ivar: _sentSnapshotRequestToAccessory
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int underlyingErrorCode; // ivar: _underlyingErrorCode
@property (retain, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails
@property (retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *watchMessaging; // ivar: _watchMessaging


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)certifiedAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCertified:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif