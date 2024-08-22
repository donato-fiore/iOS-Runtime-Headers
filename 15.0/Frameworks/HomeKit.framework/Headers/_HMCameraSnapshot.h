// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMCAMERASNAPSHOT_H
#define _HMCAMERASNAPSHOT_H

@class NSDate;


#import "HMCameraSource.h"

@interface _HMCameraSnapshot : HMCameraSource

@property (readonly, copy, nonatomic) NSDate *captureDate; // ivar: _captureDate


-(id)initWithSessionID:(id)arg0 slotIdentifier:(id)arg1 context:(id)arg2 profileUniqueIdentifier:(id)arg3 aspectRatio:(id)arg4 captureDate:(id)arg5 ;
-(void)_releaseSlotIdentifier;
-(void)dealloc;


@end


#endif