// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATAHUMANHEADOBJECT_H
#define AVMETADATAHUMANHEADOBJECT_H

@protocol NSCopying;


#import "AVMetadataObject.h"

@interface AVMetadataHumanHeadObject : AVMetadataObject <NSCopying>





+(id)humanHeadObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 type:(id)arg3 ;


@end


#endif