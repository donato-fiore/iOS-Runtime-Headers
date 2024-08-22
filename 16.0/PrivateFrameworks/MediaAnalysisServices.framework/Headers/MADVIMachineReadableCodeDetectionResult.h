// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADVIMACHINEREADABLECODEDETECTIONRESULT_H
#define MADVIMACHINEREADABLECODEDETECTIONRESULT_H

@class NSArray;


#import "MADResult.h"

@interface MADVIMachineReadableCodeDetectionResult : MADResult

@property (readonly) NSUInteger executionNanoseconds;
@property (readonly) CGFloat executionTimeInterval;
@property (readonly, nonatomic) NSArray *observations; // ivar: _observations
@property (readonly, nonatomic) NSArray *resultItems;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObservations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif