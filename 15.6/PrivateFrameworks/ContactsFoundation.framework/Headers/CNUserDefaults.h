// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUSERDEFAULTS_H
#define CNUSERDEFAULTS_H

@class NSDictionary;
@protocol CNPrimitiveUserDefaults;

#import <Foundation/Foundation.h>


@interface CNUserDefaults : NSObject {
    id<CNPrimitiveUserDefaults> *_primitiveDefaults;
}


@property (copy) NSDictionary *registeredDefaults; // ivar: _registeredDefaults


+(id)inMemoryPreferences;
+(id)preferencesWithApplicationID:(id)arg0 ;
+(id)standardPreferences;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(BOOL)primitiveBoolValueForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(BOOL)synchronize;
-(BOOL)userHasOptedInToPreference:(id)arg0 ;
-(BOOL)userHasOptedOutOfPreference:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(NSInteger)primitiveIntegerValueForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(id)initWithApplicationID:(id)arg0 ;
-(id)initWithPrimitiveDefaults:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)primitiveDefaults;
-(id)primitiveObjectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)primitiveRemoveObjectForKey:(id)arg0 ;
-(void)registerDefaults:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setupAutosync;


@end


#endif