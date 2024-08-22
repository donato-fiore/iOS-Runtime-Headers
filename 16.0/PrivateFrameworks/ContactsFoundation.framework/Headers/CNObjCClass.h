// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNOBJCCLASS_H
#define CNOBJCCLASS_H


#import <Foundation/Foundation.h>


@interface CNObjCClass : NSObject {
    Class _cls;
}




+(BOOL)addMethod:(id)arg0 toClass:(Class)arg1 ;
+(id)allMethodsOfClass:(Class)arg0 ;
+(id)classWithClass:(Class)arg0 ;
+(id)instanceMethodOfClass:(Class)arg0 forSelector:(SEL)arg1 ;
+(void)enumerateMethodsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(BOOL)addMethod:(id)arg0 ;
-(id)allMethods;
-(id)initWithClass:(Class)arg0 ;
-(id)instanceMethodForSelector:(SEL)arg0 ;
-(void)enumerateMethodsWithBlock:(id)arg0 ;


@end


#endif