// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXCOLORSCHEME_H
#define OAXCOLORSCHEME_H


#import <Foundation/Foundation.h>


@interface OAXColorScheme : NSObject



+(?)readFromXmlNodetoColorScheme;
+(id)colorForScheme:(id)arg0 colorMap:(id)arg1 value:(id)arg2 ;
+(id)colorForScheme:(id)arg0 value:(id)arg1 ;
+(id)schemeColorEnumMap;
+(void)writeColorScheme:(id)arg0 to:(id)arg1 state:(id)arg2 ;


@end


#endif