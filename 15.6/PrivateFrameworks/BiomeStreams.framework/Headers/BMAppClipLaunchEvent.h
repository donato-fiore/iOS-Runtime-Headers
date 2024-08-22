// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMAPPCLIPLAUNCHEVENT_H
#define BMAPPCLIPLAUNCHEVENT_H

@class NSString, NSURL;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMAppClipLaunchEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *URLHash; // ivar: _URLHash
@property (readonly, copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (readonly, copy, nonatomic) NSString *clipBundleID; // ivar: _clipBundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *fullURL; // ivar: _fullURL
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (readonly, copy, nonatomic) NSString *referrerBundleID; // ivar: _referrerBundleID
@property (readonly, copy, nonatomic) NSURL *referrerURL; // ivar: _referrerURL
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *webAppBundleID; // ivar: _webAppBundleID


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithURLHash:(id)arg0 clipBundleID:(id)arg1 appBundleID:(id)arg2 webAppBundleID:(id)arg3 launchReason:(id)arg4 fullURL:(id)arg5 referrerURL:(id)arg6 referrerBundleID:(id)arg7 ;
-(id)proto;
-(id)serialize;


@end


#endif