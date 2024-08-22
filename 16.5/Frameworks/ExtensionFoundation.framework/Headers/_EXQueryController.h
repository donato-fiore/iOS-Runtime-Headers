// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXQUERYCONTROLLER_H
#define _EXQUERYCONTROLLER_H

@class NSString, NSArray, NSOrderedSet;
@protocol _EXServiceClientObserver, _EXActiveQueryObserver, _EXQueryControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _EXQueryController : NSObject <_EXServiceClientObserver, _EXActiveQueryObserver>

 {
    os_unfair_lock_s _extensionsLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_EXQueryControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *extensionIdentities;
@property (readonly) NSArray *extensions;
@property (nonatomic) *os_unfair_lock_s extensionsLock;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOrderedSet *internalExtensions; // ivar: _internalExtensions
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly, copy) NSArray *queries; // ivar: _queries
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger unelectedCount; // ivar: _unelectedCount


+(id)asyncQueryQueue;
+(id)executeQueries:(id)arg0 ;
+(id)executeQuery:(id)arg0 ;
+(void)executeQueries:(id)arg0 completionHandler:(id)arg1 ;
+(void)executeQuery:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithQueries:(id)arg0 ;
-(id)initWithQueries:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)query:(id)arg0 resultDidUpdate:(id)arg1 ;
-(void)resultDidUpdate:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif