// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSRECENTHISTORYTOPICTAGCONTROLLER_H
#define WBSRECENTHISTORYTOPICTAGCONTROLLER_H


#import <Foundation/Foundation.h>

#import "WBSHistory.h"

@interface WBSRecentHistoryTopicTagController : NSObject {
    WBSHistory *_history;
}


@property (nonatomic) NSUInteger maximumNumberOfTopics; // ivar: _maximumNumberOfTopics
@property (nonatomic) CGFloat timeIntervalBeforeNowForFetchingTags; // ivar: _timeIntervalBeforeNowForFetchingTags


-(id)initWithHistory:(id)arg0 ;
-(void)loadTopicsWithCompletionHandler:(id)arg0 ;


@end


#endif