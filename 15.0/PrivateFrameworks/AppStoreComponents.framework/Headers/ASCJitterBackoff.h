// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCJITTERBACKOFF_H
#define ASCJITTERBACKOFF_H

@class NSString;
@protocol ASCBackoff;

#import <Foundation/Foundation.h>

#import "ASCExponentialBackoff.h"

@interface ASCJitterBackoff : NSObject <ASCBackoff>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASCExponentialBackoff *exponentialBackoff; // ivar: _exponentialBackoff
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)nextSleepTimeInterval;
-(id)initWithBaseSleepTimeInterval:(CGFloat)arg0 maxSleepTimeInterval:(CGFloat)arg1 ;
-(void)reset;


@end


#endif