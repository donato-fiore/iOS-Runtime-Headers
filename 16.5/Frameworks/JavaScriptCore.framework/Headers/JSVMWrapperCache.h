// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JSVMWRAPPERCACHE_H
#define JSVMWRAPPERCACHE_H


#import <Foundation/Foundation.h>


@interface JSVMWrapperCache : NSObject



+(id)wrapperForJSContextGroupRef:(struct OpaqueJSContextGroup *)arg0 ;
+(void)addWrapper:(id)arg0 forJSContextGroupRef:(struct OpaqueJSContextGroup *)arg1 ;


@end


#endif