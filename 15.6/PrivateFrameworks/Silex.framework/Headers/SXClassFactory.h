// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCLASSFACTORY_H
#define SXCLASSFACTORY_H


#import <Foundation/Foundation.h>


@interface SXClassFactory : NSObject



+(Class)classForBaseClass:(Class)arg0 type:(id)arg1 ;
+(id)valueClassBlockForBaseClass:(SEL)arg0 ;
+(void)initialize;
+(void)registerClass:(Class)arg0 type:(id)arg1 baseClass:(Class)arg2 ;
+(void)startTesting;
+(void)stopTesting;


@end


#endif