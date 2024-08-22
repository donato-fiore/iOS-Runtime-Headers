// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSPARTICIPATIONSTATUSPARAMETER_H
#define ICSPARTICIPATIONSTATUSPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSParticipationStatusParameter : ICSPredefinedValue



+(id)participationStatusParameterFromCode:(int)arg0 ;
+(id)participationStatusParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif