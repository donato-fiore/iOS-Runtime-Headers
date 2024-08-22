// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPDECAYEDFEEDBACKCOUNTS_H
#define PPDECAYEDFEEDBACKCOUNTS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PPDecayedFeedbackCounts : NSObject

@property (readonly, nonatomic) CGFloat engagedExplicitly; // ivar: _engagedExplicitly
@property (readonly, nonatomic) CGFloat engagedImplicitly; // ivar: _engagedImplicitly
@property (readonly, nonatomic) NSDate *latestDate; // ivar: _latestDate
@property (readonly, nonatomic) CGFloat rejectedExplicitly; // ivar: _rejectedExplicitly
@property (readonly, nonatomic) CGFloat rejectedImplicitly; // ivar: _rejectedImplicitly


-(id)initWithLatestDate:(id)arg0 engagedExplicitly:(CGFloat)arg1 engagedImplicitly:(CGFloat)arg2 rejectedExplicitly:(CGFloat)arg3 rejectedImplicitly:(CGFloat)arg4 ;
-(id)toDictionary;


@end


#endif