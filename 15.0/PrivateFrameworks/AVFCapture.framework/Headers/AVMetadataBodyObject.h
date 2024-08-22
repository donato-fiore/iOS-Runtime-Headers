// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMETADATABODYOBJECT_H
#define AVMETADATABODYOBJECT_H

@protocol NSCopying;


#import "AVMetadataObject.h"

@interface AVMetadataBodyObject : AVMetadataObject <NSCopying>



@property (readonly) NSInteger bodyID; // ivar: _bodyID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 type:(id)arg4 bodyID:(NSInteger)arg5 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 type:(id)arg3 ;
-(id)initWithType:(id)arg0 bodyID:(NSInteger)arg1 time:(struct ? )arg2 duration:(struct ? )arg3 bounds:(struct CGRect )arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;


@end


#endif