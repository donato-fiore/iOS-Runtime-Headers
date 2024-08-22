// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLDEFAULTS_H
#define APODMLDEFAULTS_H

@class NSMutableDictionary;


#import "APOdmlSingleton.h"

@interface APOdmlDefaults : APOdmlSingleton

@property (nonatomic) *__CFString defaultsBundleID; // ivar: _defaultsBundleID
@property (retain, nonatomic) NSMutableDictionary *factoryDefaults; // ivar: _factoryDefaults


+(BOOL)boolForKey:(id)arg0 ;
+(CGFloat)doubleForKey:(id)arg0 ;
+(NSInteger)integerForKey:(id)arg0 ;
+(id)_defaultValueForKey:(id)arg0 valueClass:(Class)arg1 ;
+(id)arrayForKey:(id)arg0 ;
+(id)sharedInstance;
+(id)stringForKey:(id)arg0 ;
+(void)_setDefaultValue:(id)arg0 forKey:(id)arg1 ;
+(void)setArray:(id)arg0 forKey:(id)arg1 ;
+(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
+(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
+(void)setString:(id)arg0 forKey:(id)arg1 ;
-(id)init;


@end


#endif