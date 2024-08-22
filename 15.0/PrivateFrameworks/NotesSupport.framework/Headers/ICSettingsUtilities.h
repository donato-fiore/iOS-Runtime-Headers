// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSETTINGSUTILITIES_H
#define ICSETTINGSUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICSettingsUtilities : NSObject



+(BOOL)boolForKey:(id)arg0 ;
+(id)objectForKey:(id)arg0 ;
+(void)registerDefaults:(id)arg0 ;
+(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif