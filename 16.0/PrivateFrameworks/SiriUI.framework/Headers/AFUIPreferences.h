// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUIPREFERENCES_H
#define AFUIPREFERENCES_H

@class NSUserDefaults;
@protocol AFUIPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface AFUIPreferences : NSObject {
    NSUserDefaults *_userDefaults;
}


@property (weak, nonatomic) NSObject<AFUIPreferencesDelegate> *delegate; // ivar: _delegate


-(BOOL)boolForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(id)init;
-(id)initWithDefaultsAtURL:(id)arg0 ;
-(id)initWithDefaultsResource:(id)arg0 withExtension:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithSuiteName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)_mutateValueForKey:(id)arg0 block:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)synchronize;


@end


#endif