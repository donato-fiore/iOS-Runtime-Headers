// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSSCHEDULEFORCESENDPARAMETER_H
#define ICSSCHEDULEFORCESENDPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSScheduleForceSendParameter : ICSPredefinedValue



+(id)scheduleForceSendParameterFromCode:(int)arg0 ;
+(id)scheduleForceSendParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif