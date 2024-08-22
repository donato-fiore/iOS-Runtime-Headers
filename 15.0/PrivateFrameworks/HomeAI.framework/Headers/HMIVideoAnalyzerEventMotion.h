// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZEREVENTMOTION_H
#define HMIVIDEOANALYZEREVENTMOTION_H



#import "HMIVideoAnalyzerEvent.h"

@interface HMIVideoAnalyzerEventMotion : HMIVideoAnalyzerEvent

@property (readonly) float motionScore; // ivar: _motionScore


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 motionScore:(float)arg2 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif