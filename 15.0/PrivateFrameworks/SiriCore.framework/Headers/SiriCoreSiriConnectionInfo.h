// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICORESIRICONNECTIONINFO_H
#define SIRICORESIRICONNECTIONINFO_H

@class NSString, SAConnectionPolicy, SAConnectionPolicyRoute, NSError, NSURL;

#import <Foundation/Foundation.h>


@interface SiriCoreSiriConnectionInfo : NSObject

@property (copy, nonatomic) NSString *aceHost; // ivar: _aceHost
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (copy, nonatomic) NSString *connectionId; // ivar: _connectionId
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy; // ivar: _connectionPolicy
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute; // ivar: _connectionPolicyRoute
@property (nonatomic, getter=isForceOnDeviceOnlyDictationEnabled) BOOL forceOnDeviceOnlyDictation; // ivar: _forceOnDeviceOnlyDictation
@property (nonatomic) BOOL forceReconnect; // ivar: _forceReconnect
@property (nonatomic) BOOL imposePolicyBan; // ivar: _imposePolicyBan
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (copy, nonatomic) NSString *peerAssistantIdentifier; // ivar: _peerAssistantIdentifier
@property (nonatomic) BOOL prefersWWAN; // ivar: _prefersWWAN
@property (nonatomic) BOOL requiresURLSession; // ivar: _requiresURLSession
@property (nonatomic) BOOL skipPeer; // ivar: _skipPeer
@property (copy, nonatomic) NSError *skipPeerErrorReason; // ivar: _skipPeerErrorReason
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useWiFiHint; // ivar: _useWiFiHint


-(id)description;
-(void)_appendPotentiallyNilString:(id)arg0 toMutableString:(id)arg1 ;


@end


#endif