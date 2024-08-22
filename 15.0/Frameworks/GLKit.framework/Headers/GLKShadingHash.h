// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKSHADINGHASH_H
#define GLKSHADINGHASH_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GLKShadingHash : NSObject {
    NSObject<OS_dispatch_queue> *_vshQueue;
    NSObject<OS_dispatch_queue> *_fshQueue;
    NSMutableDictionary *_compiledVshs;
    NSMutableDictionary *_compiledFshs;
}




-(id)compiledFshForKey:(id)arg0 ;
-(id)compiledVshForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)purgeAllShaders;
-(void)setCompiledFsh:(id)arg0 forKey:(id)arg1 ;
-(void)setCompiledVsh:(id)arg0 forKey:(id)arg1 ;


@end


#endif