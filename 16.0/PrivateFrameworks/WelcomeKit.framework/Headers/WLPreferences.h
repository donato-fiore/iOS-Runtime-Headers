// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLPREFERENCES_H
#define WLPREFERENCES_H


#import <Foundation/Foundation.h>


@interface WLPreferences : NSObject



+(char)boolForKey:(id)arg0 ;
+(id)stringForKey:(id)arg0 ;
+(void)removeForKey:(id)arg0 ;
+(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif