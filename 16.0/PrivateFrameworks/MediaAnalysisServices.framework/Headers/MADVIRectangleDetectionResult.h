// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADVIRECTANGLEDETECTIONRESULT_H
#define MADVIRECTANGLEDETECTIONRESULT_H

@class NSArray;


#import "MADResult.h"

@interface MADVIRectangleDetectionResult : MADResult

@property (readonly, nonatomic) NSArray *observations; // ivar: _observations


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObservations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif