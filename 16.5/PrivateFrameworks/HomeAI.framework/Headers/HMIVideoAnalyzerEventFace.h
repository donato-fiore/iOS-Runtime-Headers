// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZEREVENTFACE_H
#define HMIVIDEOANALYZEREVENTFACE_H

@class NSNumber, NSUUID;


#import "HMIVideoAnalyzerEvent.h"
#import "HMIFaceRecognition.h"
#import "HMITorsoAnnotation.h"

@interface HMIVideoAnalyzerEventFace : HMIVideoAnalyzerEvent

@property (readonly) HMIFaceRecognition *faceRecognition; // ivar: _faceRecognition
@property (readonly) NSNumber *roll; // ivar: _roll
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMITorsoAnnotation *torsoAnnotation; // ivar: _torsoAnnotation
@property (readonly) NSNumber *yaw; // ivar: _yaw


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 faceRecognition:(id)arg2 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 yaw:(id)arg2 roll:(id)arg3 faceRecognition:(id)arg4 torsoAnnotation:(id)arg5 userInfo:(id)arg6 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 yaw:(id)arg2 roll:(id)arg3 faceRecognition:(id)arg4 userInfo:(id)arg5 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif