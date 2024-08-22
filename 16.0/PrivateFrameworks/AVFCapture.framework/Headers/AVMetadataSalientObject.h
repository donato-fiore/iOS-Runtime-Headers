// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATASALIENTOBJECT_H
#define AVMETADATASALIENTOBJECT_H

@protocol NSCopying;


#import "AVMetadataObject.h"

@interface AVMetadataSalientObject : AVMetadataObject <NSCopying>



@property (readonly) NSInteger objectID; // ivar: _objectID


+(id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 type:(id)arg3 ;
-(id)initWithObjectID:(NSInteger)arg0 time:(struct ? )arg1 duration:(struct ? )arg2 bounds:(struct CGRect )arg3 ;
-(id)initWithObjectID:(NSInteger)arg0 time:(struct ? )arg1 duration:(struct ? )arg2 bounds:(struct CGRect )arg3 optionalInfoDict:(id)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;


@end


#endif