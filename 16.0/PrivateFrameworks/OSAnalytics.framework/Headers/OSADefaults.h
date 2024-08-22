// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSADEFAULTS_H
#define OSADEFAULTS_H


#import <Foundation/Foundation.h>


@interface OSADefaults : NSObject



+(BOOL)boolForKey:(id)arg0 ;
+(id)objectForKey:(id)arg0 ;
+(void)sendOperation:(NSUInteger)arg0 forKey:(id)arg1 withBlock:(id)arg2 ;
+(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif