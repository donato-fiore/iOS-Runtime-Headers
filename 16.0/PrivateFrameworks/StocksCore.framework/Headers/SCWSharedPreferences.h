// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWSHAREDPREFERENCES_H
#define SCWSHAREDPREFERENCES_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}




+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)synchronize;


@end


#endif