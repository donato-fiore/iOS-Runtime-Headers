// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUBLOCKCALLTHROTTLER_H
#define BUBLOCKCALLTHROTTLER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface BUBlockCallThrottler : NSObject

@property (retain, nonatomic) NSDate *lastBlockCallDate; // ivar: _lastBlockCallDate
@property (nonatomic) CGFloat minimumTimeBetweenCalls; // ivar: _minimumTimeBetweenCalls
@property (nonatomic) BOOL running; // ivar: _running


// -(BOOL)_runBlock:(id)arg0 throttle:(unk)arg1  ;
-(BOOL)runBlockThrottled:(id)arg0 ;
-(id)init;
-(void)runBlock:(id)arg0 ;


@end


#endif