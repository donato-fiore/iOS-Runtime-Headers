// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTDATA_H
#define HMDCAMERASNAPSHOTDATA_H

@class HMFObject, NSData, HMFOSTransaction;


#import "HMDVideoResolution.h"

@interface HMDCameraSnapshotData : HMFObject

@property (readonly) NSData *snapshotData; // ivar: _snapshotData
@property (readonly) HMFOSTransaction *snapshotDataTrasaction; // ivar: _snapshotDataTrasaction
@property (readonly) HMDVideoResolution *videoResolution; // ivar: _videoResolution


-(id)initWithSnapshotData:(id)arg0 videoResolution:(id)arg1 snapshotDataTrasaction:(id)arg2 ;
-(id)initWithSnapshotFile:(id)arg0 videoResolution:(id)arg1 ;
-(void)dealloc;


@end


#endif