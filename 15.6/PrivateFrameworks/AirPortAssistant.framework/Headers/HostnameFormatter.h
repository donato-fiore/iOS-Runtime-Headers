// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOSTNAMEFORMATTER_H
#define HOSTNAMEFORMATTER_H



#import "APFormatter.h"

@interface HostnameFormatter : APFormatter



+(id)hostnameFormatter:(NSUInteger)arg0 ;
+(id)hostnameSet;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;


@end


#endif