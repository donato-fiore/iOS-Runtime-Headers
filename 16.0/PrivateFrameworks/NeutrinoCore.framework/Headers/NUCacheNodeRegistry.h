// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCACHENODEREGISTRY_H
#define NUCACHENODEREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUCacheNodeRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}




-(Class)classForCacheNodeType:(id)arg0 ;
-(id)init;
-(void)registerClass:(Class)arg0 forCacheNodeType:(id)arg1 ;


@end


#endif