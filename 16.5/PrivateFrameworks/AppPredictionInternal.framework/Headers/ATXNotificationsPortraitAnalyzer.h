// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSPORTRAITANALYZER_H
#define ATXNOTIFICATIONSPORTRAITANALYZER_H


#import <Foundation/Foundation.h>


@interface ATXNotificationsPortraitAnalyzer : NSObject



+(NSUInteger)findOccurences:(id)arg0 token:(id)arg1 ;
+(id)analyzeContent:(id)arg0 withEntity:(id)arg1 score:(CGFloat)arg2 ;


@end


#endif