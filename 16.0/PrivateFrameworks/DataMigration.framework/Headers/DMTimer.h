// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTIMER_H
#define DMTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DMTimer : NSObject

@property (copy, nonatomic) id *fireBlock; // ivar: _fireBlock
@property (nonatomic) NSUInteger secondsBeforeFirstFire; // ivar: _secondsBeforeFirstFire
@property (nonatomic) NSUInteger secondsOfLeeway; // ivar: _secondsOfLeeway
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


-(id)initWithSecondsBeforeFirstFire:(NSUInteger)arg0 secondsOfLeeway:(NSUInteger)arg1 fireBlock:(id)arg2 ;
-(void)cancel;
-(void)cancelSynchronously;
-(void)resume;


@end


#endif