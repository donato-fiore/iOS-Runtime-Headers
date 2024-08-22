// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXQUERYOBSERVER_H
#define _EXQUERYOBSERVER_H

@class NSArray, NSSet;
@protocol _EXActiveQueryObserver, _EXQueryObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _EXQueryObserver : NSObject <_EXActiveQueryObserver>

 {
    os_unfair_lock_s _extensionsLock;
}


@property (readonly, weak) NSObject<_EXQueryObserverDelegate> *delegate; // ivar: _delegate
@property (readonly) NSArray *extensions;
@property (nonatomic) *os_unfair_lock_s extensionsLock;
@property (retain, nonatomic) NSSet *internalExtensions; // ivar: _internalExtensions
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly, copy) NSArray *queries; // ivar: _queries


-(id)initWithQueries:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)query:(id)arg0 resultDidUpdate:(id)arg1 ;
-(void)resultDidUpdate:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif