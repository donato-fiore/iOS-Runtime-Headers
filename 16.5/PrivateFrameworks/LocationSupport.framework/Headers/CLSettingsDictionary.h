// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSETTINGSDICTIONARY_H
#define CLSETTINGSDICTIONARY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CLSettingsDictionary : NSObject

@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _internal


+(id)settingsWithDictionary:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)hasValueForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(NSInteger)longForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(float)floatForKey:(id)arg0 defaultValue:(float)arg1 ;
-(id)arrayForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)dictionaryForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)stringForKey:(id)arg0 defaultValue:(id)arg1 ;
-(int)intForKey:(id)arg0 defaultValue:(int)arg1 ;
-(short)shortForKey:(id)arg0 defaultValue:(short)arg1 ;
-(void)dealloc;


@end


#endif