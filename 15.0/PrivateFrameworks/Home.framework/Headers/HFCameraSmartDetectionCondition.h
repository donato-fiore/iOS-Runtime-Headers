// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERASMARTDETECTIONCONDITION_H
#define HFCAMERASMARTDETECTIONCONDITION_H



#import "HFCondition.h"

@interface HFCameraSmartDetectionCondition : HFCondition



+(BOOL)_predicateIsValidForPersonFamiliarityKeyPath:(id)arg0 ;
+(BOOL)_predicateIsValidForSignificantEventKeyPath:(id)arg0 ;
-(id)hf_naturalLanguageSummaryWithOptions:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif