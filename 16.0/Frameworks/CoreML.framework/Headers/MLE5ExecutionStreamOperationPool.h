// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5EXECUTIONSTREAMOPERATIONPOOL_H
#define MLE5EXECUTIONSTREAMOPERATIONPOOL_H

@class NSURL, NSString, NSDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MLE5ExecutionStreamOperationPool : NSObject

@property (readonly, copy) NSURL *e5BundleURL; // ivar: _e5BundleURL
@property (readonly) NSString *functionName; // ivar: _functionName
@property (readonly) NSDictionary *outputDescriptionsByName; // ivar: _outputDescriptionsByName
@property (readonly) NSMutableSet *pool; // ivar: _pool
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)initWithE5BundleAtURL:(id)arg0 functionName:(id)arg1 outputDescriptionsByName:(id)arg2 ;
-(id)takeOut;
-(void)putBack:(id)arg0 ;


@end


#endif