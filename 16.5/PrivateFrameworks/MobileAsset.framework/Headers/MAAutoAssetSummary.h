// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETSUMMARY_H
#define MAAUTOASSETSUMMARY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetSelector.h"
#import "MAAutoAssetStatus.h"

@interface MAAutoAssetSummary : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger activeClientCount; // ivar: _activeClientCount
@property (nonatomic) NSInteger activeMonitorCount; // ivar: _activeMonitorCount
@property (nonatomic) BOOL assetIsStaged; // ivar: _assetIsStaged
@property (nonatomic) NSInteger assetRepresentation; // ivar: _assetRepresentation
@property (retain, nonatomic) MAAutoAssetSelector *assetSelector; // ivar: _assetSelector
@property (nonatomic) BOOL assetWasPatched; // ivar: _assetWasPatched
@property (retain, nonatomic) MAAutoAssetStatus *jobStatus; // ivar: _jobStatus
@property (nonatomic) NSInteger maximumClientCount; // ivar: _maximumClientCount
@property (nonatomic) NSInteger pushDelaySecs; // ivar: _pushDelaySecs
@property (nonatomic) NSInteger scheduledIntervalSecs; // ivar: _scheduledIntervalSecs
@property (nonatomic) NSInteger scheduledRemainingSecs; // ivar: _scheduledRemainingSecs
@property (nonatomic) NSInteger totalClientCount; // ivar: _totalClientCount


+(BOOL)supportsSecureCoding;
+(id)assetRepresentationName:(NSInteger)arg0 ;
+(id)summaryNewMaxColumnStrings;
+(id)summaryPaddedBanner:(id)arg0 ;
+(id)summaryPaddedHeader:(id)arg0 ;
+(id)summaryPaddedString:(id)arg0 paddingToLenghtOfString:(id)arg1 paddingWith:(id)arg2 paddingBefore:(BOOL)arg3 ;
-(id)description;
-(id)initWithAssetSelector:(id)arg0 withAssetRepresentation:(NSInteger)arg1 withAssetWasPatched:(BOOL)arg2 withAssetIsStaged:(BOOL)arg3 withJobStatus:(id)arg4 withScheduledIntervalSecs:(NSInteger)arg5 withScheduledRemainingSecs:(NSInteger)arg6 withPushDelaySecs:(NSInteger)arg7 withActiveClientCount:(NSInteger)arg8 withActiveMonitorCount:(NSInteger)arg9 withMaximumClientCount:(NSInteger)arg10 withTotalClientCount:(NSInteger)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newSummaryDictionary;
-(id)summary;
-(id)summaryPadded:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)summaryBuildMaxColumnStrings:(id)arg0 ;


@end


#endif