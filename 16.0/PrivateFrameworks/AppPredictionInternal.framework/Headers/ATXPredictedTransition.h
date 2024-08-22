// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPREDICTEDTRANSITION_H
#define ATXPREDICTEDTRANSITION_H

@class NSDate, ATXLocationOfInterest;

#import <Foundation/Foundation.h>


@interface ATXPredictedTransition : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) ATXLocationOfInterest *loi; // ivar: _loi


-(id)description;
-(id)init;
-(id)initWithDate:(id)arg0 loi:(id)arg1 ;
-(id)transitionArrayForDate:(id)arg0 ;


@end


#endif