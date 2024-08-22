// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERRESULTCACHE_H
#define NURENDERRESULTCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NURenderResultCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cache;
}




+(id)shared;
-(id)init;
-(id)resultForJob:(id)arg0 ;
-(void)flush;
-(void)setResult:(id)arg0 forJob:(id)arg1 ;


@end


#endif