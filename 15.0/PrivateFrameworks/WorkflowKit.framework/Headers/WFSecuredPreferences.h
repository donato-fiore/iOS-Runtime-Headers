// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSECUREDPREFERENCES_H
#define WFSECUREDPREFERENCES_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface WFSecuredPreferences : NSObject

@property (copy, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)standardPreferences;
-(BOOL)boolForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)registerDefaults:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)savePreferences;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif