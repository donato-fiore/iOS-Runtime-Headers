// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRUNTIMEUTILITIES_H
#define VNRUNTIMEUTILITIES_H


#import <Foundation/Foundation.h>


@interface VNRuntimeUtilities : NSObject



+(BOOL)class:(Class)arg0 overridesClassSelector:(SEL)arg1 ;
+(BOOL)linkTimeOrRunTimeAtLeastVersion:(int)arg0 ;
+(BOOL)linkTimeOrRunTimeBeforeVersion:(int)arg0 ;
+(BOOL)object:(id)arg0 overridesSelector:(SEL)arg1 ;
+(id)allSubclassesOfClass:(Class)arg0 excludingRootClass:(BOOL)arg1 overridingClassSelector:(SEL)arg2 ;
+(id)leafSubclassesOfClass:(Class)arg0 excludingRootClass:(BOOL)arg1 overridingClassSelector:(SEL)arg2 ;
+(id)subclassesOfClass:(Class)arg0 excludingRootClass:(BOOL)arg1 passingTest:(id)arg2 ;
+(int)linkTimeVersion;
+(int)runTimeVersion;
+(void)enumerateSubclassesOfClass:(Class)arg0 excludingRootClass:(BOOL)arg1 usingBlock:(id)arg2 ;


@end


#endif