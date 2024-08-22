// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITHISTORYANALYZEROPTIONS_H
#define PFCLOUDKITHISTORYANALYZEROPTIONS_H

@class CKSchedulerActivity;


#import "PFHistoryAnalyzerOptions.h"

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    BOOL _includePrivateTransactions;
    CKSchedulerActivity *_activity;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif