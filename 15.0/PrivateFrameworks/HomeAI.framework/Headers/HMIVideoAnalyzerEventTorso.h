// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZEREVENTTORSO_H
#define HMIVIDEOANALYZEREVENTTORSO_H

@class NSNumber, NSUUID;


#import "HMIVideoAnalyzerEvent.h"
#import "HMITorsoRecognition.h"

@interface HMIVideoAnalyzerEventTorso : HMIVideoAnalyzerEvent

@property (readonly) NSNumber *roll; // ivar: _roll
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMITorsoRecognition *torsoRecognition; // ivar: _torsoRecognition


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 roll:(id)arg2 torsoRecognition:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif