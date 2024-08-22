// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTSESSIONID_H
#define HMDCAMERASNAPSHOTSESSIONID_H

@class NSString, NSNumber;
@protocol NSCopying;


#import "HMDCameraSessionID.h"

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying>



@property (readonly) NSString *snapshotCharacteristicEventUUID; // ivar: _snapshotCharacteristicEventUUID
@property (readonly) NSUInteger snapshotReason; // ivar: _snapshotReason
@property (readonly, getter=isSnapshotRequestForBulletin) BOOL snapshotRequestForBulletin; // ivar: _snapshotRequestForBulletin
@property (readonly) NSNumber *streamingTier; // ivar: _streamingTier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 message:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 cameraSessionAppID:(id)arg2 descriptionString:(id)arg3 spiClient:(BOOL)arg4 snapshotReason:(NSUInteger)arg5 snapshotRequestForBulletin:(BOOL)arg6 snapshotCharacteristicEventUUID:(id)arg7 streamingTier:(id)arg8 ;


@end


#endif