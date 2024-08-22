// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMWEBUSAGEEVENT_H
#define BMWEBUSAGEEVENT_H

@class NSString, NSURL;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMWebUsageEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUsageTrusted; // ivar: _isUsageTrusted
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) NSUInteger usageState; // ivar: _usageState
@property (readonly, nonatomic) NSString *webDomain; // ivar: _webDomain
@property (readonly, nonatomic) NSURL *webpageURL; // ivar: _webpageURL


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithEventDate:(id)arg0 usageState:(NSUInteger)arg1 webpageURL:(id)arg2 webDomain:(id)arg3 applicationID:(id)arg4 isUsageTrusted:(BOOL)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueID:(id)arg0 absoluteTimestamp:(CGFloat)arg1 usageState:(NSUInteger)arg2 webpageURL:(id)arg3 webDomain:(id)arg4 applicationID:(id)arg5 deviceID:(id)arg6 isUsageTrusted:(BOOL)arg7 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif