// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVMULTICALLBACK_H
#define MSVMULTICALLBACK_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSVCallback.h"

@interface MSVMultiCallback : NSObject {
    NSMutableArray *_callbacks;
    MSVCallback *_firstCallback;
    MSVCallback *_lastCallback;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSArray *callbacks;
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) MSVCallback *firstCallback;
@property (retain, nonatomic) MSVCallback *lastCallback;


-(BOOL)removeCallback:(id)arg0 ;
-(id)init;
-(void)addCallback:(id)arg0 ;
-(void)invoke;
-(void)invokeWithObject:(id)arg0 ;


@end


#endif