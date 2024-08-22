// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONUIFEEDBACKSESSION_H
#define ATXPROACTIVESUGGESTIONUIFEEDBACKSESSION_H

@class NSMutableOrderedSet, NSUUID, NSOrderedSet, NSDate, NSString;
@protocol NSSecureCoding, ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionUIFeedbackSession : NSObject <NSSecureCoding>

 {
    NSMutableOrderedSet *_engagedUUIDs;
    NSMutableOrderedSet *_rejectedUUIDs;
    NSMutableOrderedSet *_shownUUIDs;
}


@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID; // ivar: _blendingUICacheUpdateUUID
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) NSOrderedSet *engagedUUIDs;
@property (readonly, nonatomic) NSOrderedSet *rejectedUUIDs;
@property (readonly, nonatomic) NSDate *sessionEndDate; // ivar: _sessionEndDate
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> *sessionMetadata; // ivar: _sessionMetadata
@property (readonly, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, nonatomic) NSOrderedSet *shownUUIDs;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionUIFeedbackSession:(id)arg0 ;
-(BOOL)isValidSession;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 sessionIdentifier:(id)arg1 consumerSubType:(unsigned char)arg2 sessionStartDate:(id)arg3 sessionEndDate:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 engagedUUIDs:(id)arg6 rejectedUUIDs:(id)arg7 shownUUIDs:(id)arg8 sessionMetadata:(id)arg9 ;
-(id)mutableEngagedUUIDs;
-(id)mutableRejectedUUIDs;
-(id)mutableShownUUIDs;
-(id)validSessionMetadataClassNames;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateBlendingUICacheUpdateUUIDIfUnset:(id)arg0 ;
-(void)updateConsumerSubTypeIfUnset:(unsigned char)arg0 ;
-(void)updateEngagedUUIDs:(id)arg0 rejectedUUIDs:(id)arg1 shownUUIDs:(id)arg2 ;
-(void)updateSessionEndDateIfUnset:(id)arg0 ;
-(void)updateSessionMetadataIfUnset:(id)arg0 ;
-(void)updateSessionStartDateIfUnset:(id)arg0 ;


@end


#endif