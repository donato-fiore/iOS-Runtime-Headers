// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSROLEPARAMETER_H
#define ICSROLEPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSRoleParameter : ICSPredefinedValue



+(id)roleParameterFromCode:(int)arg0 ;
+(id)roleParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif