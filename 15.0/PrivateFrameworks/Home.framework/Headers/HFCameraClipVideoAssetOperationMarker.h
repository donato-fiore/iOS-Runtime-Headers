// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERACLIPVIDEOASSETOPERATIONMARKER_H
#define HFCAMERACLIPVIDEOASSETOPERATIONMARKER_H

@class HMCameraClip, NSString, HMCameraClipFetchVideoAssetContextOperation;

#import <Foundation/Foundation.h>

#import "HFCameraClipVideoAssetOperationMarker.h"

@interface HFCameraClipVideoAssetOperationMarker : NSObject

@property (retain, nonatomic) HMCameraClip *clip; // ivar: _clip
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (weak, nonatomic) HFCameraClipVideoAssetOperationMarker *next; // ivar: _next
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *operation; // ivar: _operation
@property (weak, nonatomic) HFCameraClipVideoAssetOperationMarker *previous; // ivar: _previous


+(id)sentinelWithKey:(id)arg0 ;
-(id)initWithCameraClip:(id)arg0 operation:(id)arg1 key:(id)arg2 ;


@end


#endif