// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCUSTOMLOGCONTEXT_H
#define TSKCUSTOMLOGCONTEXT_H

@class NSString;
@protocol TSULogContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSKCustomLogContext : NSObject <TSULogContext>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSULogContext> *_parentLogContext;
}


@property (readonly) NSObject<TSULogContext> *baseLogContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<TSULogContext> *parentLogContext;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) NSString *publicStringComponent;
@property (readonly) Class superclass;


-(id)initWithParentLogContext:(id)arg0 ;


@end


#endif