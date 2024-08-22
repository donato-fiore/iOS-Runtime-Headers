// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTAGMANAGER_H
#define HMMTAGMANAGER_H

@class NSString;
@protocol HMMTagDispatching, HMMLogEventSubmitting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMMTagManager : NSObject <HMMTagDispatching>



@property (retain) NSObject<HMMTagDispatching> *currentDispatcher; // ivar: _currentDispatcher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)init;
-(void)registerTagObserver:(id)arg0 forTags:(id)arg1 ;
-(void)resetTagDispatcher;
-(void)setTagDispatcher:(id)arg0 ;
-(void)submitTaggedEvent:(id)arg0 processorList:(id)arg1 ;
-(void)unregisterTagObserver:(id)arg0 forTags:(id)arg1 ;


@end


#endif