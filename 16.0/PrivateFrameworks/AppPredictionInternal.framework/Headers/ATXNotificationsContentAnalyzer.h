// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSCONTENTANALYZER_H
#define ATXNOTIFICATIONSCONTENTANALYZER_H

@class NSArray, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXNotificationsContentAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_ppnames;
    NSArray *_ppscores;
    NSDate *_lastUpdated;
}




-(BOOL)isExpired;
-(id)analyzeContent:(id)arg0 ;
-(id)init;
-(void)updateAnalyzers;


@end


#endif