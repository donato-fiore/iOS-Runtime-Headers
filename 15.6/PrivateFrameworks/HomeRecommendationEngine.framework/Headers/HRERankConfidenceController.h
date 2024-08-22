// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRERANKCONFIDENCECONTROLLER_H
#define HRERANKCONFIDENCECONTROLLER_H


#import <Foundation/Foundation.h>


@interface HRERankConfidenceController : NSObject



+(CGFloat)_limitRankToValidRange:(CGFloat)arg0 ;
+(NSInteger)version;
-(id)rankRecommendations:(id)arg0 ;
-(id)rankRecommendationsFromSet:(id)arg0 ;
-(void)calculateRankForRecommendations:(id)arg0 fromTemplate:(id)arg1 ;


@end


#endif