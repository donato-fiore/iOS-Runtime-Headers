// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSTRANSPARENCYVALUE_H
#define ICSTRANSPARENCYVALUE_H



#import "ICSPredefinedValue.h"

@interface ICSTransparencyValue : ICSPredefinedValue



+(id)transparencyTypeFromCode:(int)arg0 ;
+(id)transparencyValueFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif