// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNBUFFEREDOBSERVER_H
#define _CNBUFFEREDOBSERVER_H

@class NSString;
@protocol CNObserver;

#import <Foundation/Foundation.h>

#import "CNSuspendableSchedulerDecorator.h"

@interface _CNBufferedObserver : NSObject <CNObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *observerScheduler; // ivar: _observerScheduler
@property (readonly) Class superclass;


+(id)bufferObserver:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithObserver:(id)arg0 scheduler:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;
-(void)resume;


@end


#endif