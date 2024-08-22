// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POCONFIGURATIONUTIL_H
#define POCONFIGURATIONUTIL_H


#import <Foundation/Foundation.h>


@interface POConfigurationUtil : NSObject



+(BOOL)appSSOEnabled;
+(BOOL)platformSSOEnabled;
+(id)platformSSOTriggerFile;
+(void)updateTriggerFile;


@end


#endif