// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRESULTRANKERHELPERS_H
#define WBSRESULTRANKERHELPERS_H


#import <Foundation/Foundation.h>


@interface WBSResultRankerHelpers : NSObject



+(BOOL)allowMatch:(id)arg0 forMatch:(id)arg1 forQueryString:(id)arg2 ;
+(BOOL)hostAreEqual:(id)arg0 forSecondURLString:(id)arg1 ;
+(CGFloat)topSitesScoreAndVisitCountScoreFactor:(id)arg0 forTopSiteScore:(float)arg1 forVisitCountScore:(NSInteger)arg2 ;
+(NSInteger)numberOfWords:(id)arg0 ;
+(id)simplifiedURL:(id)arg0 ;


@end


#endif