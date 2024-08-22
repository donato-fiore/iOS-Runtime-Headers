// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATATRACKEDFACESOBJECT_H
#define AVMETADATATRACKEDFACESOBJECT_H

@class NSDictionary;
@protocol NSCopying;


#import "AVMetadataObject.h"
#import "AVMetadataTrackedFacesObjectInternal.h"

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying>

 {
    AVMetadataTrackedFacesObjectInternal *_trackedFacesObjectInternal;
}


@property (readonly) NSDictionary *payload;


+(id)trackedFacesWithTime:(struct ? )arg0 faceTrackingDictionary:(id)arg1 input:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithTime:(struct ? )arg0 faceTrackingDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;


@end


#endif