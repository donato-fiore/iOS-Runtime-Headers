// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCONTINUITYTRACKERRESULT_H
#define SHCONTINUITYTRACKERRESULT_H


#import <Foundation/Foundation.h>


@interface SHContinuityTrackerResult : NSObject

@property (readonly, nonatomic) float alignmentConfidence; // ivar: _alignmentConfidence
@property (readonly, nonatomic) CGFloat queryEnd; // ivar: _queryEnd
@property (readonly, nonatomic) CGFloat queryStart; // ivar: _queryStart
@property (readonly, nonatomic) CGFloat referenceEnd; // ivar: _referenceEnd
@property (readonly, nonatomic) CGFloat referenceStart; // ivar: _referenceStart


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithQueryAlignment:(id)arg0 referenceAlignment:(id)arg1 alignmentConfidence:(float)arg2 ;


@end


#endif