// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDISPATCHGROUP_H
#define GKDISPATCHGROUP_H

@class NSString, NSError;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "GKThreadsafeDictionary.h"
#import "GKActivity.h"

@interface GKDispatchGroup : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    id *result;
    int _sequence;
}


@property (retain) GKActivity *activity; // ivar: _activity
@property (retain) NSError *error; // ivar: _error
@property (nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled; // ivar: _loggingEnabled
@property (retain) id *result; // ivar: _result


+(id)backgroundConcurrentQueue;
+(id)defaultConcurrentQueue;
+(id)dispatchGroup;
+(id)dispatchGroupWithName:(id)arg0 ;
+(id)mainQueue;
+(void)waitUntilDone:(id)arg0 ;
-(NSInteger)_waitWithDispatchTimeout:(NSUInteger)arg0 ;
-(NSInteger)waitWithTimeout:(CGFloat)arg0 ;
-(id)_values;
-(id)allValues;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)dealloc;
-(void)enter;
-(void)join:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)leave;
-(void)notifyOnMainQueueWithBlock:(id)arg0 ;
-(void)notifyOnQueue:(id)arg0 block:(id)arg1 ;
-(void)perform:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)wait;


@end


#endif