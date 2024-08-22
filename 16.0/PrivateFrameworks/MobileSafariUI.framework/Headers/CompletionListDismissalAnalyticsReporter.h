// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMPLETIONLISTDISMISSALANALYTICSREPORTER_H
#define COMPLETIONLISTDISMISSALANALYTICSREPORTER_H


#import <Foundation/Foundation.h>


@interface CompletionListDismissalAnalyticsReporter : NSObject {
    BOOL _goKeyTapped;
}


@property (nonatomic) BOOL acceptedCompletionListItem; // ivar: _acceptedCompletionListItem
@property (nonatomic) NSInteger unifiedFieldContentType; // ivar: _unifiedFieldContentType


-(void)reportAnalytics;


@end


#endif