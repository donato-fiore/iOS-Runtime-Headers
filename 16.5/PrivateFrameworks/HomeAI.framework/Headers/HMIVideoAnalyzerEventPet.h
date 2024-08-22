// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZEREVENTPET_H
#define HMIVIDEOANALYZEREVENTPET_H



#import "HMIVideoAnalyzerEvent.h"

@interface HMIVideoAnalyzerEventPet : HMIVideoAnalyzerEvent



+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 ;


@end


#endif