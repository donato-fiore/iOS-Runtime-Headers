// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCLOUDKITSYNCPROGRESS_H
#define IMCLOUDKITSYNCPROGRESS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "IMCloudKitSyncState.h"
#import "IMCloudKitSyncStatistics.h"

@interface IMCloudKitSyncProgress : NSObject

@property (retain, nonatomic) NSString *actionLabel; // ivar: _actionLabel
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic) CGFloat broadcastDeferralOverride; // ivar: _broadcastDeferralOverride
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) NSString *percentCompleteString;
@property (nonatomic) CGFloat progressBarMax; // ivar: _progressBarMax
@property (nonatomic) CGFloat progressBarValue; // ivar: _progressBarValue
@property (retain, nonatomic) NSString *progressLabel; // ivar: _progressLabel
@property (readonly, nonatomic) CGFloat remainingItems;
@property (nonatomic) BOOL shouldShowIndeterminateProgress; // ivar: _shouldShowIndeterminateProgress
@property (nonatomic) BOOL shouldShowProgressBar; // ivar: _shouldShowProgressBar
@property (nonatomic) BOOL shouldShowUserActionLabel; // ivar: _shouldShowUserActionLabel
@property (nonatomic) BOOL shouldShowUserMessageLabel; // ivar: _shouldShowUserMessageLabel
@property (readonly, nonatomic) IMCloudKitSyncState *syncState; // ivar: _syncState
@property (readonly, nonatomic) IMCloudKitSyncStatistics *syncStatistics; // ivar: _syncStatistics
@property (retain, nonatomic) NSString *userMessageLabel; // ivar: _userMessageLabel


-(id)description;
-(id)init;
-(id)initWithSyncState:(id)arg0 syncStatistics:(id)arg1 ;
-(void)configureSelf;


@end


#endif