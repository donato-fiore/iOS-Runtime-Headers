// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSECUREARCHIVINGUTILITIES_H
#define TPSSECUREARCHIVINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface TPSSecureArchivingUtilities : NSObject



+(id)unarchivedObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
+(id)unarchivedObjectOfClass:(Class)arg0 forKey:(id)arg1 userDefaults:(id)arg2 ;
+(id)unarchivedObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
+(id)unarchivedObjectOfClasses:(id)arg0 forKey:(id)arg1 userDefaults:(id)arg2 ;
+(void)archivedDataWithRootObject:(id)arg0 forKey:(id)arg1 ;
+(void)archivedDataWithRootObject:(id)arg0 forKey:(id)arg1 userDefaults:(id)arg2 ;


@end


#endif