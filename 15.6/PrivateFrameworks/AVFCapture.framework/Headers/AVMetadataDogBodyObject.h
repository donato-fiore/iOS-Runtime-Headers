// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMETADATADOGBODYOBJECT_H
#define AVMETADATADOGBODYOBJECT_H

@protocol NSCopying;


#import "AVMetadataBodyObject.h"

@interface AVMetadataDogBodyObject : AVMetadataBodyObject <NSCopying>





+(id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithBodyID:(NSInteger)arg0 time:(struct ? )arg1 duration:(struct ? )arg2 bounds:(struct CGRect )arg3 ;
-(id)initWithBodyID:(NSInteger)arg0 time:(struct ? )arg1 duration:(struct ? )arg2 bounds:(struct CGRect )arg3 optionalInfoDict:(id)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;


@end


#endif