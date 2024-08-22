// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPROMISEWITHTIMEOUT_H
#define MTPROMISEWITHTIMEOUT_H

@class NSDate;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MTPromise.h"

@interface MTPromiseWithTimeout : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceTimer; // ivar: _dispatchSourceTimer
@property (retain, nonatomic) MTPromise *promise; // ivar: _promise
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithTimeout:(CGFloat)arg0 queue:(id)arg1 timeoutBlock:(id)arg2 ;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 ;


@end


#endif