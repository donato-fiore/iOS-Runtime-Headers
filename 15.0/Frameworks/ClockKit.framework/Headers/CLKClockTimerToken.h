// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCLOCKTIMERTOKEN_H
#define CLKCLOCKTIMERTOKEN_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "CLKClockTimer.h"

@interface CLKClockTimerToken : NSObject {
    NSNumber *_id;
}


@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (copy, nonatomic) id *log; // ivar: _log
@property (weak, nonatomic) CLKClockTimer *owner; // ivar: _owner
@property (nonatomic) NSInteger updateFrequency; // ivar: _updateFrequency
@property (nonatomic) BOOL wantsCommit; // ivar: _wantsCommit
@property (nonatomic) BOOL wantsHighAccuracy; // ivar: _wantsHighAccuracy


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithID:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif