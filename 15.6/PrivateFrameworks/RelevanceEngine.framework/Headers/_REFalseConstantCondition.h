// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REFALSECONSTANTCONDITION_H
#define _REFALSECONSTANTCONDITION_H



#import "RECondition.h"

@interface _REFalseConstantCondition : RECondition



+(id)sharedInstance;
-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif