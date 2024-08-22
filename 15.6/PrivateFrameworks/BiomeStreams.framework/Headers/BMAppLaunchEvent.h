// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMAPPLAUNCHEVENT_H
#define BMAPPLAUNCHEVENT_H

@class NSString, NSDateInterval;
@protocol BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMAppLaunchEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper>



@property (nonatomic) CGFloat absoluteTimestamp;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (copy, nonatomic) NSString *extensionHostID; // ivar: _extensionHostID
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (nonatomic) NSUInteger launchType; // ivar: _launchType
@property (copy, nonatomic) NSString *parentBundleID; // ivar: _parentBundleID
@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithStarting:(BOOL)arg0 bundleID:(id)arg1 absoluteTimeStamp:(CGFloat)arg2 duration:(CGFloat)arg3 launchReason:(id)arg4 launchType:(NSUInteger)arg5 parentBundleID:(id)arg6 extensionHostID:(id)arg7 ;
-(id)initWithStarting:(BOOL)arg0 bundleID:(id)arg1 absoluteTimeStamp:(CGFloat)arg2 launchReason:(id)arg3 launchType:(NSUInteger)arg4 parentBundleID:(id)arg5 extensionHostID:(id)arg6 ;
-(id)initWithStarting:(BOOL)arg0 bundleId:(id)arg1 absoluteTimeStamp:(CGFloat)arg2 launchReason:(id)arg3 launchType:(NSUInteger)arg4 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif