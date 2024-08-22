// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCDEFAULTS_H
#define APCDEFAULTS_H


#import <Foundation/Foundation.h>


@interface APCDefaults : NSObject



+(BOOL)boolForDefault:(NSUInteger)arg0 ;
+(NSInteger)integerForDefault:(NSUInteger)arg0 ;
+(float)floatForDefault:(NSUInteger)arg0 ;
+(id)sharedDefaults;


@end


#endif