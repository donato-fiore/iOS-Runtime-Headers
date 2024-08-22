// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSCREENTIMEREQUESTEVENT_H
#define BMSCREENTIMEREQUESTEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMScreenTimeRequestEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (nonatomic) int approvalTime; // ivar: _approvalTime
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat eventTime; // ivar: _eventTime
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActionUserDevice; // ivar: _isActionUserDevice
@property (nonatomic) int kind; // ivar: _kind
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) NSString *requesterDSID; // ivar: _requesterDSID
@property (copy, nonatomic) NSString *responderDSID; // ivar: _responderDSID
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *websitePath; // ivar: _websitePath


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validNonOptionalProperty:(id)arg0 propertyName:(id)arg1 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithRequestID:(id)arg0 kind:(int)arg1 status:(int)arg2 eventTime:(CGFloat)arg3 approvalTime:(int)arg4 requesterDSID:(id)arg5 responderDSID:(id)arg6 websitePath:(id)arg7 bundleID:(id)arg8 ;
-(id)initWithRequestID:(id)arg0 kind:(int)arg1 status:(int)arg2 eventTime:(CGFloat)arg3 approvalTime:(int)arg4 requesterDSID:(id)arg5 responderDSID:(id)arg6 websitePath:(id)arg7 bundleID:(id)arg8 isActionUserDevice:(BOOL)arg9 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif