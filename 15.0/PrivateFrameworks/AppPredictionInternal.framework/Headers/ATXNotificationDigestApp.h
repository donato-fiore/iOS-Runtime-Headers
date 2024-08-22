// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONDIGESTAPP_H
#define ATXNOTIFICATIONDIGESTAPP_H

@class NSMutableArray, NSArray, NSString;
@protocol ATXNotificationDigestFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationDigestRankingConstants.h"

@interface ATXNotificationDigestApp : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> *_digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
    NSMutableArray *_rawGroups;
    NSArray *_orderedGroups;
}


@property (readonly, nonatomic) CGFloat appScore; // ivar: _appScore
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL hasBeenChosenForMarquee; // ivar: _hasBeenChosenForMarquee
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL isEligibleForAutomaticMarquee; // ivar: _isEligibleForAutomaticMarquee
@property (readonly, nonatomic) NSArray *orderedGroups;
@property (readonly, nonatomic) NSArray *unorderedGroups;


-(CGFloat)logisticScoreForInput:(CGFloat)arg0 ;
-(id)initWithBundleId:(id)arg0 digestFeedback:(id)arg1 digestConstants:(id)arg2 ;
-(void)addGroup:(id)arg0 ;
-(void)populateScoresFromBundleId;
-(void)refreshGroupOrder;


@end


#endif