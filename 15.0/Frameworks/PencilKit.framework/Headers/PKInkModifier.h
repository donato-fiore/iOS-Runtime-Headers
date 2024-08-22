// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINKMODIFIER_H
#define PKINKMODIFIER_H


#import <Foundation/Foundation.h>


@interface PKInkModifier : NSObject



+(id)dictionaryForInk:(id)arg0 name:(id)arg1 ;
+(void)addFunction:(id)arg0 forInk:(id)arg1 ;
+(void)clearInkManagerCache;
+(void)functionDidChange:(id)arg0 forInk:(id)arg1 ;
+(void)modifyInk:(id)arg0 withValue:(CGFloat)arg1 forProperty:(id)arg2 ;
+(void)removeFunction:(id)arg0 forInk:(id)arg1 ;


@end


#endif