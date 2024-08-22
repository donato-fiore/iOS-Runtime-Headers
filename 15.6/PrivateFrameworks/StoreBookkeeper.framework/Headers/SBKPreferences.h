// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKPREFERENCES_H
#define SBKPREFERENCES_H


#import <Foundation/Foundation.h>


@interface SBKPreferences : NSObject



+(id)storeBookkeeperPreferences;
-(BOOL)boolForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 withDefaultValue:(id)arg1 ;
-(void)_preferencesDidChange;
-(void)dealloc;
-(void)registerDefaultsIfKeyNotSet:(id)arg0 registrationBlock:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif