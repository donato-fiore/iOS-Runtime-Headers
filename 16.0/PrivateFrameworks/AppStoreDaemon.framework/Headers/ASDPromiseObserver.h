// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDPROMISEOBSERVER_H
#define ASDPROMISEOBSERVER_H

@protocol ASDTaskScheduler;

#import <Foundation/Foundation.h>


@interface ASDPromiseObserver : NSObject {
    id *_valueBlock;
    id *_errorBlock;
    id<ASDTaskScheduler> *_scheduler;
}




// -(id)initWithValueBlock:(id)arg0 errorBlock:(unk)arg1 scheduler:(id)arg2  ;
-(void)notifyRejectedWithError:(id)arg0 ;
-(void)notifyResolvedWithValue:(id)arg0 ;


@end


#endif