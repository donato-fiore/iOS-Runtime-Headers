// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONDELIVERYSUGGESTION_H
#define ATXNOTIFICATIONDELIVERYSUGGESTION_H

@class NSString, NSDate, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying, BMStoreData;

#import <Foundation/Foundation.h>


@interface ATXNotificationDeliverySuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying, BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger scope; // ivar: _scope
@property (readonly, nonatomic) id *subObject; // ivar: _subObject
@property (readonly, nonatomic) NSInteger subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSUUID *triggerNotificationUUID; // ivar: _triggerNotificationUUID
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXNotificationDeliverySuggestion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initPromotingSuggestionWithUUID:(id)arg0 scope:(NSInteger)arg1 entityIdentifier:(id)arg2 timestamp:(id)arg3 triggerNotificationUUID:(id)arg4 ;
-(id)initQuietingSuggestionWithUUID:(id)arg0 scope:(NSInteger)arg1 entityIdentifier:(id)arg2 timestamp:(id)arg3 triggerNotificationUUID:(id)arg4 ;
-(id)initSendToDigestSuggestionWithUUID:(id)arg0 bundleID:(id)arg1 timestamp:(id)arg2 triggerNotificationUUID:(id)arg3 ;
-(id)initSendToMessagesDigestSuggestionWithUUID:(id)arg0 bundleID:(id)arg1 timestamp:(id)arg2 triggerNotificationUUID:(id)arg3 ;
-(id)initUrgencyTuningSuggestionWithUUID:(id)arg0 bundleID:(id)arg1 timestamp:(id)arg2 triggerNotificationUUID:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterruptionManagerTuningSuggestion:(id)arg0 scope:(NSInteger)arg1 entityIdentifier:(id)arg2 uuid:(id)arg3 timestamp:(id)arg4 triggerNotificationUUID:(id)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSmartPauseSuggestion:(id)arg0 uuid:(id)arg1 scope:(NSInteger)arg2 entityIdentifier:(id)arg3 timestamp:(id)arg4 triggerNotificationUUID:(id)arg5 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif