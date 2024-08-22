// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDPREFERENCES_H
#define ACDPREFERENCES_H


#import <Foundation/Foundation.h>


@interface ACDPreferences : NSObject



+(id)sharedPreferences;
-(CGFloat)serverTimeoutInterval;
-(id)objectForKey:(id)arg0 ;
-(void)reset;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)synchronize;


@end


#endif