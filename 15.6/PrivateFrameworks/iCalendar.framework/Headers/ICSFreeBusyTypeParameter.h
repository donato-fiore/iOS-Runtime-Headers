// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSFREEBUSYTYPEPARAMETER_H
#define ICSFREEBUSYTYPEPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSFreeBusyTypeParameter : ICSPredefinedValue



+(id)freeBusyTypeParameterFromCode:(NSUInteger)arg0 ;
+(id)freeBusyTypeParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;


@end


#endif