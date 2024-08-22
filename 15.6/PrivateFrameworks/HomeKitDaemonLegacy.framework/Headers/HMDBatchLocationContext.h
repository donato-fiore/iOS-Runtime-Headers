// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBATCHLOCATIONCONTEXT_H
#define HMDBATCHLOCATIONCONTEXT_H

@class NSDate, HMFTimer, NSMutableArray;
@protocol HMDBatchLocationDelegate;

#import <Foundation/Foundation.h>


@interface HMDBatchLocationContext : NSObject

@property (weak) NSObject<HMDBatchLocationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSDate *startDate; // ivar: _startDate
@property (readonly) HMFTimer *timer; // ivar: _timer
@property (readonly) NSMutableArray *tuples; // ivar: _tuples


-(id)initWithDelegate:(id)arg0 ;


@end


#endif