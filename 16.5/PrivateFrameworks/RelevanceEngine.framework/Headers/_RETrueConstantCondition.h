// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RETRUECONSTANTCONDITION_H
#define _RETRUECONSTANTCONDITION_H



#import "RECondition.h"

@interface _RETrueConstantCondition : RECondition



+(id)sharedInstance;
-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif