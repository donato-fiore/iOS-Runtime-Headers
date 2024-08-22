// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMITORSORECOGNITION_H
#define HMITORSORECOGNITION_H

@class HMFObject, NSSet, NSUUID;
@protocol NSSecureCoding;


#import "HMITorsoClassification.h"
#import "HMITorsoprint.h"

@interface HMITorsoRecognition : HMFObject <NSSecureCoding>



@property (readonly) HMITorsoClassification *classification; // ivar: _classification
@property (readonly) NSSet *predictedLinkedEntityUUIDs; // ivar: _predictedLinkedEntityUUIDs
@property (readonly) NSInteger sessionEntityAssignment; // ivar: _sessionEntityAssignment
@property (readonly) NSUUID *sessionEntityUUID; // ivar: _sessionEntityUUID
@property (readonly) HMITorsoprint *torsoprint; // ivar: _torsoprint


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTorsoprint:(id)arg0 classification:(id)arg1 predictedLinkedEntityUUIDs:(id)arg2 sessionEntityAssignment:(NSInteger)arg3 sessionEntityUUID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif