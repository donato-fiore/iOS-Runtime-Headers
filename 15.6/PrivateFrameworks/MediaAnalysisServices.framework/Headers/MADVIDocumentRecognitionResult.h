// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADVIDOCUMENTRECOGNITIONRESULT_H
#define MADVIDOCUMENTRECOGNITIONRESULT_H

@class NSArray;


#import "MADResult.h"

@interface MADVIDocumentRecognitionResult : MADResult

@property (readonly) NSUInteger executionNanoseconds;
@property (readonly) CGFloat executionTimeInterval;
@property (readonly, nonatomic) NSArray *observations; // ivar: _observations


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObservations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif