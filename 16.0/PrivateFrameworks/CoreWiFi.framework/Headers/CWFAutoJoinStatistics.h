// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFAUTOJOINSTATISTICS_H
#define CWFAUTOJOINSTATISTICS_H

@class NSMutableDictionary, NSString, NSDictionary, NSDate;
@protocol CWFJSONEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFAutoJoinStatistics : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger GASQueryCount; // ivar: _GASQueryCount
@property (nonatomic) NSUInteger autoHotspotAbortedCount; // ivar: _autoHotspotAbortedCount
@property (nonatomic) NSUInteger autoHotspotCount; // ivar: _autoHotspotCount
@property (nonatomic) NSUInteger autoHotspotDidFindCandidateCount; // ivar: _autoHotspotDidFindCandidateCount
@property (nonatomic) NSUInteger autoHotspotDidJoinCount; // ivar: _autoHotspotDidJoinCount
@property (nonatomic) NSUInteger autoJoinAbortedCount; // ivar: _autoJoinAbortedCount
@property (nonatomic) NSUInteger autoJoinAlreadyAssociatedCount; // ivar: _autoJoinAlreadyAssociatedCount
@property (readonly) NSUInteger autoJoinCount;
@property (nonatomic) NSUInteger autoJoinDidFindCandidateCount; // ivar: _autoJoinDidFindCandidateCount
@property (nonatomic) NSUInteger autoJoinDidJoinCount; // ivar: _autoJoinDidJoinCount
@property (readonly) NSUInteger autoJoinRetryCount;
@property (retain, nonatomic) NSMutableDictionary *autoJoinTriggerCounts; // ivar: _autoJoinTriggerCounts
@property (readonly) NSUInteger combinedScanChannelCount;
@property (readonly) NSUInteger combinedScanChannelCount2GHz;
@property (readonly) NSUInteger combinedScanChannelCount5GHz;
@property (readonly) NSString *coreAnalyticsEventName;
@property (readonly) NSDictionary *coreAnalyticsEventPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger preAssocScanChannelCount; // ivar: _preAssocScanChannelCount
@property (nonatomic) NSUInteger preAssocScanChannelCount2GHz; // ivar: _preAssocScanChannelCount2GHz
@property (nonatomic) NSUInteger preAssocScanChannelCount5GHz; // ivar: _preAssocScanChannelCount5GHz
@property (nonatomic) NSUInteger scanChannelCount; // ivar: _scanChannelCount
@property (nonatomic) NSUInteger scanChannelCount2GHz; // ivar: _scanChannelCount2GHz
@property (nonatomic) NSUInteger scanChannelCount5GHz; // ivar: _scanChannelCount5GHz
@property (copy, nonatomic) NSDate *startedAt; // ivar: _startedAt
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutoJoinStatistics:(id)arg0 ;
-(id)JSONCompatibleKeyValueMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif