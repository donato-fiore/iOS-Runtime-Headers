// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXPAGESETUP_H
#define EXPAGESETUP_H


#import <Foundation/Foundation.h>


@interface EXPageSetup : NSObject



+(?)edPageMarginsFromstate;
+(?)edPageSetupFromstate;
+(id)pageOrderEnumMap;
+(id)pageOrientationEnumMap;
+(int)edPageOrderFromPageOrderString:(id)arg0 ;
+(int)edPageOrientationFromPageOrientationString:(id)arg0 ;


@end


#endif