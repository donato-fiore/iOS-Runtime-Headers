// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSPREFERENCES_H
#define TPSPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TPSPreferences : NSObject

@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL showSubscriptionList;


+(id)sharedInstance;
-(BOOL)boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(NSInteger)integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSUInteger)unsignedIntegerForKey:(id)arg0 defaultValue:(NSUInteger)arg1 ;
-(id)init;
-(id)numberForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)preferencesValueForKey:(id)arg0 ;
-(id)preferencesValueForKey:(id)arg0 domain:(id)arg1 ;
-(id)stringForKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setPreferencesValue:(id)arg0 forKey:(id)arg1 ;
-(void)setPreferencesValue:(id)arg0 forKey:(id)arg1 domain:(id)arg2 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setUnsignedInteger:(NSUInteger)arg0 forKey:(id)arg1 ;


@end


#endif