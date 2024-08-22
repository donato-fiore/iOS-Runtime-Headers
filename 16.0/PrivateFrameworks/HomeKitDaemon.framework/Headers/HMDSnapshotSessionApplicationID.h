// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSNAPSHOTSESSIONAPPLICATIONID_H
#define HMDSNAPSHOTSESSIONAPPLICATIONID_H

@class HMFObject;
@protocol NSCopying;


#import "HMDProcessInfo.h"
#import "HMDCameraSnapshotSessionID.h"

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying>



@property (readonly, nonatomic) HMDProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSessionID:(id)arg0 processInfo:(id)arg1 ;


@end


#endif