// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISEVENTBULLETIN_H
#define HMDAUDIOANALYSISEVENTBULLETIN_H

@class NSUUID, NSString, NSDate, NSDictionary;
@protocol NSSecureCoding, HMDAudioAnalysisEventSubscriberContext;

#import <Foundation/Foundation.h>


@interface HMDAudioAnalysisEventBulletin : NSObject <NSSecureCoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy) NSString *body;
@property (readonly) NSObject<HMDAudioAnalysisEventSubscriberContext> *context; // ivar: _context
@property (readonly) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSUUID *notificationUUID; // ivar: _notificationUUID
@property (readonly, copy) NSDictionary *presence; // ivar: _presence
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly, copy) NSString *soundIdentifier; // ivar: _soundIdentifier
@property (readonly) NSDate *startDate; // ivar: _startDate
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly, copy) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithReason:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 presence:(id)arg3 notificationUUID:(id)arg4 state:(NSUInteger)arg5 soundIdentifier:(id)arg6 name:(id)arg7 threadIdentifier:(id)arg8 accessoryUUID:(id)arg9 title:(id)arg10 ;
-(id)localizedKeyForEventEndWithDropIn:(BOOL)arg0 ;
-(id)localizedKeyForEventStartWithDropIn:(BOOL)arg0 ;
-(id)serialize;
-(id)stringForAudioAnalysisReason;
-(void)configureWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif