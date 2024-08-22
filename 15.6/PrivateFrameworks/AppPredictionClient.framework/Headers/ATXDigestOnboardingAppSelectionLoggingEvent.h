// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDIGESTONBOARDINGAPPSELECTIONLOGGINGEVENT_H
#define ATXDIGESTONBOARDINGAPPSELECTIONLOGGINGEVENT_H

@class NSString, NSUUID;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingAppSelectionLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) BOOL addedToDigest; // ivar: _addedToDigest
@property (readonly, nonatomic) NSUInteger avgNumBasicNotifications; // ivar: _avgNumBasicNotifications
@property (readonly, nonatomic) NSUInteger avgNumMessageNotfications; // ivar: _avgNumMessageNotfications
@property (readonly, nonatomic) NSUInteger avgNumTimeSensitiveNonMessageNotifications; // ivar: _avgNumTimeSensitiveNonMessageNotifications
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger rank; // ivar: _rank
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wasShownInDigestOnboarding; // ivar: _wasShownInDigestOnboarding


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 bundleId:(id)arg1 avgNumBasicNotifications:(NSUInteger)arg2 avgNumMessageNotifications:(NSUInteger)arg3 avgNumTimeSensitiveNonMessageNotifications:(NSUInteger)arg4 rank:(NSUInteger)arg5 addedToDigest:(BOOL)arg6 wasShownInDigestOnboarding:(BOOL)arg7 ;
-(id)proto;
-(id)serialize;


@end


#endif