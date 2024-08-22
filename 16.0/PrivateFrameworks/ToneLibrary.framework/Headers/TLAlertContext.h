// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLALERTCONTEXT_H
#define TLALERTCONTEXT_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TLAlertContext : NSObject

@property (nonatomic, getter=isBeingInterrupted) BOOL beingInterrupted; // ivar: _beingInterrupted
@property (nonatomic) NSInteger playbackBackEnd; // ivar: _playbackBackEnd
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerSource; // ivar: _timeoutTimerSource




@end


#endif