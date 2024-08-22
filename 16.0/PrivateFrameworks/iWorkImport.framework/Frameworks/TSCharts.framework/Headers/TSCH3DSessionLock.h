// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSESSIONLOCK_H
#define TSCH3DSESSIONLOCK_H


#import <Foundation/Foundation.h>


@interface TSCH3DSessionLock : NSObject



+(void)performBlockWithSession:(id)arg0 block:(id)arg1 ;
+(void)performBlockWithSession:(id)arg0 renderingContext:(id)arg1 block:(id)arg2 ;
+(void)performBlockWithSession:(id)arg0 renderingContext:(id)arg1 shouldUpdateContextVirtualScreen:(BOOL)arg2 block:(id)arg3 ;


@end


#endif