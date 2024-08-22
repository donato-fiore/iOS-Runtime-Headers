// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZEREVENTPERSON_H
#define HMIVIDEOANALYZEREVENTPERSON_H

@class NSUUID;


#import "HMIVideoAnalyzerEvent.h"
#import "HMIVideoAnalyzerEventFace.h"
#import "HMIVideoAnalyzerEventTorso.h"

@interface HMIVideoAnalyzerEventPerson : HMIVideoAnalyzerEvent

@property (readonly) CGRect boundingBoxForTracker;
@property (readonly) HMIVideoAnalyzerEventFace *face; // ivar: _face
@property (readonly, getter=hasEstimatedBoundingBox) BOOL isBoundingBoxEstimated; // ivar: _isBoundingBoxEstimated
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMIVideoAnalyzerEventTorso *torso; // ivar: _torso


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allEvents;
-(id)attributeDescriptions;
-(id)confidence;
-(id)copyWithFaceEvent:(id)arg0 torso:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 face:(id)arg2 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 face:(id)arg2 torso:(id)arg3 ;
-(id)initWithFaceEvent:(id)arg0 ;
-(id)initWithFaceEvent:(id)arg0 torso:(id)arg1 ;
-(id)initWithTorsoEvent:(id)arg0 ;
-(id)shortDescription;
-(struct CGRect )boundingBox;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif