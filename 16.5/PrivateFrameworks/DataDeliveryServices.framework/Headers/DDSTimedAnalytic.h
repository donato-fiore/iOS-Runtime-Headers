// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTIMEDANALYTIC_H
#define DDSTIMEDANALYTIC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DDSTimedAnalytic : NSObject

@property (readonly, nonatomic) NSUInteger durationInSec;
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int lastAction; // ivar: _lastAction
@property (nonatomic) NSUInteger retries; // ivar: _retries
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL success; // ivar: _success


-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)updateWithAction:(int)arg0 ;


@end


#endif