// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENGROUPCONTEXTNOTIFYINGOBSERVER_H
#define ENGROUPCONTEXTNOTIFYINGOBSERVER_H

@class NSString;
@protocol ENGroupContextObserverMiddleware, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *onGroupCache; // ivar: _onGroupCache
@property (copy, nonatomic) id *onGroupCreate; // ivar: _onGroupCreate
@property (copy, nonatomic) id *onGroupUpdate; // ivar: _onGroupUpdate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(void)groupContext:(id)arg0 didCacheGroup:(id)arg1 ;
-(void)groupContext:(id)arg0 didCreateGroup:(id)arg1 ;
-(void)groupContext:(id)arg0 didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 ;


@end


#endif