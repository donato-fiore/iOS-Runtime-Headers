// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUJSCONTEXTPOOL_H
#define NUJSCONTEXTPOOL_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUJSContextPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}




+(id)sharedContextPool;
-(id)_newContext;
-(id)init;
-(id)newContext;
-(void)_returnContext:(id)arg0 ;
-(void)returnContext:(id)arg0 ;


@end


#endif