// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFACERECOGNITION_H
#define HMIFACERECOGNITION_H

@class HMFObject, NSSet, NSString, NSUUID;
@protocol HMFLogging, NSSecureCoding;


#import "HMIFaceCrop.h"
#import "HMIFaceprint.h"

@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly) NSSet *classifications; // ivar: _classifications
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceCrop *faceCrop; // ivar: _faceCrop
@property (readonly) CGFloat faceQualityScore; // ivar: _faceQualityScore
@property (readonly) HMIFaceprint *faceprint; // ivar: _faceprint
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *predictedLinkedEntityUUIDs; // ivar: _predictedLinkedEntityUUIDs
@property (readonly) NSInteger sessionEntityAssignment; // ivar: _sessionEntityAssignment
@property (readonly) NSUUID *sessionEntityUUID; // ivar: _sessionEntityUUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceCrop:(id)arg0 faceprint:(id)arg1 classifications:(id)arg2 ;
-(id)initWithFaceCrop:(id)arg0 faceprint:(id)arg1 classifications:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 ;
-(id)initWithFaceCrop:(id)arg0 faceprint:(id)arg1 classifications:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 faceQualityScore:(CGFloat)arg4 sessionEntityAssignment:(NSInteger)arg5 sessionEntityUUID:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif