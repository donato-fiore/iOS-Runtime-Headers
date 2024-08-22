// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMNOTIFICATIONEVENT_H
#define BMNOTIFICATIONEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMNotificationEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSUInteger badge; // ivar: _badge
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (readonly, nonatomic) NSArray *contactIDs; // ivar: _contactIDs
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGroupMessage; // ivar: _isGroupMessage
@property (readonly, nonatomic) NSString *notificationID; // ivar: _notificationID
@property (readonly, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *threadID; // ivar: _threadID
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) NSUInteger usageType; // ivar: _usageType


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithDKEvent:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueID:(id)arg0 absoluteTimestamp:(CGFloat)arg1 usageType:(NSUInteger)arg2 bundleID:(id)arg3 notificationID:(id)arg4 deviceID:(id)arg5 title:(id)arg6 subtitle:(id)arg7 badge:(NSUInteger)arg8 threadID:(id)arg9 categoryID:(id)arg10 sectionID:(id)arg11 contactIDs:(id)arg12 isGroupMessage:(BOOL)arg13 ;
-(id)proto;
-(id)serialize;


@end


#endif