// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETLOCKTRACKER_H
#define MAAUTOASSETLOCKTRACKER_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetLockReason.h"
#import "MAAutoAssetPolicy.h"

@interface MAAutoAssetLockTracker : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger activeLockCount; // ivar: _activeLockCount
@property (readonly, retain, nonatomic) MAAutoAssetLockReason *clientLockReason; // ivar: _clientLockReason
@property (nonatomic) NSInteger continueCount; // ivar: _continueCount
@property (retain, nonatomic) NSDate *firstLockTimestamp; // ivar: _firstLockTimestamp
@property (retain, nonatomic) NSDate *lastRefreshTimestamp; // ivar: _lastRefreshTimestamp
@property (retain, nonatomic) MAAutoAssetPolicy *lockUsagePolicy; // ivar: _lockUsagePolicy
@property (nonatomic) NSInteger maximumLockCount; // ivar: _maximumLockCount
@property (nonatomic) NSInteger totalLockCount; // ivar: _totalLockCount


+(BOOL)supportsSecureCoding;
+(id)summaryNewMaxColumnStrings;
+(id)summaryPaddedBanner:(id)arg0 ;
+(id)summaryPaddedHeader:(id)arg0 ;
+(id)summaryPaddedString:(id)arg0 paddingToLenghtOfString:(id)arg1 paddingWith:(id)arg2 paddingBefore:(BOOL)arg3 ;
-(id)copy;
-(id)description;
-(id)initForClientLockReason:(id)arg0 lockingWithUsagePolicy:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newSummaryDictionary;
-(id)summary;
-(id)summaryPadded:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)summaryBuildMaxColumnStrings:(id)arg0 ;


@end


#endif