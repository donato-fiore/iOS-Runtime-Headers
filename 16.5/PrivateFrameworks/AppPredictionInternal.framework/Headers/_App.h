// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _APP_H
#define _APP_H

@class NSArray, NSString;
@protocol ATXNotificationDigestFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationDigestRankingConstants.h"

@interface _App : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> *_digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
    NSUInteger _maxAppMarqueeGroups;
}


@property (readonly, nonatomic) NSArray *appMarqueeGroups; // ivar: _appMarqueeGroups
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) CGFloat digestRankingScore; // ivar: _digestRankingScore
@property (readonly, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) NSArray *groupsWithComms; // ivar: _groupsWithComms
@property (readonly, nonatomic) NSArray *groupsWithCommsWithPreviewableAttachment; // ivar: _groupsWithCommsWithPreviewableAttachment
@property (readonly, nonatomic) NSArray *groupsWithCommsWithoutPreviewableAttachment; // ivar: _groupsWithCommsWithoutPreviewableAttachment
@property (readonly, nonatomic) NSArray *groupsWithoutComms; // ivar: _groupsWithoutComms
@property (readonly, nonatomic) NSArray *groupsWithoutCommsWithPreviewableAttachment; // ivar: _groupsWithoutCommsWithPreviewableAttachment
@property (readonly, nonatomic) NSArray *groupsWithoutCommsWithoutPreviewableAttachment; // ivar: _groupsWithoutCommsWithoutPreviewableAttachment
@property (readonly, nonatomic) NSArray *nonAppMarqueeGroups; // ivar: _nonAppMarqueeGroups


-(CGFloat)logisticScoreForInput:(CGFloat)arg0 ;
-(id)getGroupsFromNotificationStacks:(id)arg0 ;
-(id)initWithNotificationStacks:(id)arg0 maxAppMarqueeGroups:(NSUInteger)arg1 digestFeedback:(id)arg2 ;
-(void)setRankedGroupsFromNotificationGroups:(id)arg0 ;


@end


#endif