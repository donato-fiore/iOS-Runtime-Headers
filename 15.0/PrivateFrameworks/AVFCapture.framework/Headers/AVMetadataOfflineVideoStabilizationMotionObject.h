// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMETADATAOFFLINEVIDEOSTABILIZATIONMOTIONOBJECT_H
#define AVMETADATAOFFLINEVIDEOSTABILIZATIONMOTIONOBJECT_H

@class NSDictionary;
@protocol NSCopying;


#import "AVMetadataObject.h"
#import "AVMetadataOfflineVideoStabilizationMotionObjectInternal.h"

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying>

 {
    AVMetadataOfflineVideoStabilizationMotionObjectInternal *_offlineVISMotionObjectInternal;
}


@property (readonly) NSDictionary *payload;


+(id)offlineVideoStabilizationMotionObjectWithTime:(struct ? )arg0 motionDictionary:(id)arg1 input:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTime:(struct ? )arg0 motionDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;


@end


#endif