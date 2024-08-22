// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONFEEDTHROTTLE_H
#define FCFEEDTRANSFORMATIONFEEDTHROTTLE_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationFeedThrottle : NSObject <FCFeedTransforming>



@property (copy, nonatomic) id *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly) Class superclass;


+(id)transformationWithDailyLimit:(NSUInteger)arg0 timeInterval:(CGFloat)arg1 condition:(id)arg2 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif