// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CLKTIMEFORMATSENTINEL_H
#define _CLKTIMEFORMATSENTINEL_H


#import <Foundation/Foundation.h>


@interface _CLKTimeFormatSentinel : NSObject



+(void)_handleLocaleChange;
+(void)listenForLocaleChangesIfNecessary;


@end


#endif