// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTSESSIONID_H
#define HMDCAMERASNAPSHOTSESSIONID_H

@class NSString, NSNumber;


#import "HMDCameraSessionID.h"

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID

@property (readonly) NSString *snapshotCharacteristicEventUUID; // ivar: _snapshotCharacteristicEventUUID
@property (readonly) NSUInteger snapshotReason; // ivar: _snapshotReason
@property (readonly, getter=isSnapshotRequestForBulletin) BOOL snapshotRequestForBulletin; // ivar: _snapshotRequestForBulletin
@property (readonly) NSNumber *streamingTier; // ivar: _streamingTier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 message:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 hostProcessBundleIdentifier:(id)arg1 isSPIClient:(BOOL)arg2 deviceSectionName:(id)arg3 description:(id)arg4 snapshotReason:(NSUInteger)arg5 snapshotRequestForBulletin:(BOOL)arg6 snapshotCharacteristicEventUUID:(id)arg7 streamingTier:(id)arg8 ;


@end


#endif