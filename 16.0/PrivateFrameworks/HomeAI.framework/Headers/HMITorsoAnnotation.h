// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMITORSOANNOTATION_H
#define HMITORSOANNOTATION_H

@class HMFObject, NSUUID, NSArray;
@protocol NSSecureCoding;


#import "HMIFaceRecognition.h"

@interface HMITorsoAnnotation : HMFObject <NSSecureCoding>



@property (readonly) HMIFaceRecognition *faceRecognition; // ivar: _faceRecognition
@property (readonly) NSUUID *torsoModelVersion; // ivar: _torsoModelVersion
@property (readonly) NSArray *torsoprints; // ivar: _torsoprints


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceRecognition:(id)arg0 torsoprints:(id)arg1 ;
-(id)initWithFaceRecognition:(id)arg0 torsoprints:(id)arg1 torsoModelVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif