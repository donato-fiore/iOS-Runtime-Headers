// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNJITTERER_H
#define SCNJITTERER_H

@protocol SCNJittererDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SCNJitterer : NSObject {
    BOOL _enabled;
    NSUInteger _state;
    NSUInteger _iteration;
    BOOL _restartSourceIsSuspended;
    id<SCNJittererDelegate> *_delegate;
    NSObject<OS_dispatch_source> *_restartSource;
}


@property (nonatomic, getter=isEnabled) BOOL enabled;


+(void)initialize;
-(BOOL)isAborting;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)delegateWillDie;
-(void)jitter;
-(void)restart;
-(void)stopIfNeeded;
-(void)update;


@end


#endif