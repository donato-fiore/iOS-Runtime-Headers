// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPCLIENTSESSION_H
#define _CPCLIENTSESSION_H

@class PBCodable, NSString, NSArray, NSData, NSDictionary;
@protocol _CPClientSession, NSSecureCoding;


#import "_CPUsageEnvelope.h"
#import "_CPUsageSinceLookback.h"

@interface _CPClientSession : PBCodable <_CPClientSession, NSSecureCoding>



@property (copy, nonatomic) NSString *agent; // ivar: _agent
@property (retain, nonatomic) _CPUsageEnvelope *cohortsFeedback; // ivar: _cohortsFeedback
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int devicePersistentD20; // ivar: _devicePersistentD20
@property (nonatomic) BOOL duEnabled; // ivar: _duEnabled
@property (copy, nonatomic) NSArray *experimentInfos; // ivar: _experimentInfos
@property (copy, nonatomic) NSArray *feedbacks; // ivar: _feedbacks
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInternalCarry; // ivar: _isInternalCarry
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *jsonFeedback; // ivar: _jsonFeedback
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (copy, nonatomic) NSString *parsecDeveloperID; // ivar: _parsecDeveloperID
@property (nonatomic) int previousSessionEndReason; // ivar: _previousSessionEndReason
@property (nonatomic) int privateRelayStatus; // ivar: _privateRelayStatus
@property (nonatomic) BOOL removeTimestamps; // ivar: _removeTimestamps
@property (copy, nonatomic) NSDictionary *resourceVersions; // ivar: _resourceVersions
@property (nonatomic) CGFloat sessionStart; // ivar: _sessionStart
@property (readonly) Class superclass;
@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // ivar: _usageSinceLookback
@property (copy, nonatomic) NSString *userGuidString; // ivar: _userGuidString


-(BOOL)getResourceVersions:(*id)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)experimentInfoCount;
-(NSUInteger)feedbackCount;
-(id)experimentInfoAtIndex:(NSUInteger)arg0 ;
-(id)feedbackAtIndex:(NSUInteger)arg0 ;
-(void)addExperimentInfo:(id)arg0 ;
-(void)addFeedback:(id)arg0 ;
-(void)clearExperimentInfo;
-(void)clearFeedback;
-(void)setExperimentInfo:(id)arg0 ;
-(void)setFeedback:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif