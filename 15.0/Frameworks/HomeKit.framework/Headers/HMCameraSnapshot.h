// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASNAPSHOT_H
#define HMCAMERASNAPSHOT_H

@class NSDate;


#import "HMCameraSource.h"
#import "_HMCameraSnapshot.h"

@interface HMCameraSnapshot : HMCameraSource

@property (readonly, copy, nonatomic) NSDate *captureDate;
@property (retain, nonatomic) _HMCameraSnapshot *snapshot; // ivar: _snapshot


-(id)initWithSnapshot:(id)arg0 ;


@end


#endif