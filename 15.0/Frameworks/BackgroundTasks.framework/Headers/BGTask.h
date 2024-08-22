// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BGTASK_H
#define BGTASK_H

@class _DASActivity, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BGTask : NSObject

@property (retain, nonatomic, setter=_setActivity:) _DASActivity *_activity; // ivar: __activity
@property (nonatomic, setter=_setCompleted:) BOOL _completed; // ivar: __completed
@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (retain, nonatomic, setter=_setHandlerQueue:) NSObject<OS_dispatch_queue> *_handlerQueue; // ivar: __handlerQueue
@property (nonatomic, setter=_setLock:) os_unfair_lock_s _lock; // ivar: __lock
@property (copy) id *expirationHandler; // ivar: _expirationHandler
@property (readonly, copy) NSString *identifier; // ivar: _identifier


-(id)_initWithIdentifier:(id)arg0 activity:(id)arg1 ;
-(id)_unsafe_setTaskCompletedWithSuccess:(SEL)arg0 afterDelay:(BOOL)arg1 ;
-(void)_callExpirationHandler;
-(void)_setTaskCompletedWithSuccess:(BOOL)arg0 actionsIfNotAlreadyCompleted:(id)arg1 ;
-(void)dealloc;
-(void)setTaskCompletedWithSuccess:(BOOL)arg0 ;


@end


#endif