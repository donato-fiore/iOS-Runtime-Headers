// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPUSAGESINCELOOKBACK_H
#define _CPUSAGESINCELOOKBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPUsageSinceLookback, NSSecureCoding;


#import "_CPDeviceContext.h"

@interface _CPUsageSinceLookback : PBCodable <_CPUsageSinceLookback, NSSecureCoding>



@property (nonatomic) int activeDaysInCollectionPeriod; // ivar: _activeDaysInCollectionPeriod
@property (nonatomic) int client; // ivar: _client
@property (nonatomic) NSInteger collectionEndTimestamp; // ivar: _collectionEndTimestamp
@property (nonatomic) NSInteger collectionStartTimestamp; // ivar: _collectionStartTimestamp
@property (nonatomic) int configuredLookbackTimeInDays; // ivar: _configuredLookbackTimeInDays
@property (retain, nonatomic) _CPDeviceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int invokedDays; // ivar: _invokedDays
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled; // ivar: _isDiagnosticsAndUsageEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int numSearchEngagements; // ivar: _numSearchEngagements
@property (nonatomic) int searchedDays; // ivar: _searchedDays
@property (nonatomic) int suggestionOrAppleResultEngagedDays; // ivar: _suggestionOrAppleResultEngagedDays
@property (readonly) Class superclass;
@property (nonatomic) int totalEngagements; // ivar: _totalEngagements
@property (nonatomic) int totalUsagesInCollectionPeriod; // ivar: _totalUsagesInCollectionPeriod
@property (nonatomic) int voiceSearchDays; // ivar: _voiceSearchDays
@property (nonatomic) int webEngagedDays; // ivar: _webEngagedDays
@property (nonatomic) int zkwEngagedDays; // ivar: _zkwEngagedDays


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif