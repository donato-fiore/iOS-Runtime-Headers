// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSUSERIDENTITYCLASSIFIER_H
#define CSUSERIDENTITYCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface CSUserIdentityClassifier : NSObject



+(NSUInteger)classifyUserIdentityFor:(id)arg0 withScores:(id)arg1 withAsset:(id)arg2 ;
+(id)pickTopScoringProfileIdFromScores:(id)arg0 ;
+(id)stringFromClassificationCategory:(NSUInteger)arg0 ;


@end


#endif