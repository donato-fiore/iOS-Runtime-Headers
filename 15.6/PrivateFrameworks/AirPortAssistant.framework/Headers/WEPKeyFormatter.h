// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEPKEYFORMATTER_H
#define WEPKEYFORMATTER_H



#import "UTF8Formatter.h"

@interface WEPKeyFormatter : UTF8Formatter



+(id)sharedWEPKeyFormatter;
+(id)wepKeyFormatter:(NSUInteger)arg0 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;


@end


#endif