// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSESSIONENDEDMETRIC_H
#define IDSSESSIONENDEDMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSNumber *callDuration; // ivar: _callDuration
@property (readonly, nonatomic) unsigned int conferenceMiscError; // ivar: _conferenceMiscError
@property (readonly, nonatomic) NSNumber *connectDuration; // ivar: _connectDuration
@property (readonly, nonatomic) unsigned int connectionType; // ivar: _connectionType
@property (readonly, nonatomic) NSNumber *currentNATType; // ivar: _currentNATType
@property (readonly, nonatomic) NSNumber *dataRate; // ivar: _dataRate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) unsigned int endedReason; // ivar: _endedReason
@property (readonly, nonatomic) unsigned int gameKitError; // ivar: _gameKitError
@property (readonly, nonatomic) unsigned int genericError; // ivar: _genericError
@property (readonly, nonatomic) NSNumber *gksError; // ivar: _gksError
@property (readonly, nonatomic) NSNumber *gksReturnCode; // ivar: _gksReturnCode
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInitiator; // ivar: _isInitiator
@property (readonly, nonatomic) BOOL isNetworkActive; // ivar: _isNetworkActive
@property (readonly, nonatomic) BOOL isNetworkEnabled; // ivar: _isNetworkEnabled
@property (readonly, nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable
@property (readonly, nonatomic) NSNumber *linkQuality; // ivar: _linkQuality
@property (readonly, nonatomic) unsigned int localNetworkConnection; // ivar: _localNetworkConnection
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned int networkCheckResult; // ivar: _networkCheckResult
@property (readonly, nonatomic) NSNumber *relayConnectDuration; // ivar: _relayConnectDuration
@property (readonly, nonatomic) NSNumber *remoteNATType; // ivar: _remoteNATType
@property (readonly, nonatomic) unsigned int remoteNetworkConnection; // ivar: _remoteNetworkConnection
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesRelay; // ivar: _usesRelay


-(id)initWithGuid:(id)arg0 endedReason:(unsigned int)arg1 genericError:(unsigned int)arg2 gameKitError:(unsigned int)arg3 conferenceMiscError:(unsigned int)arg4 callDuration:(id)arg5 isNetworkEnabled:(BOOL)arg6 isNetworkActive:(BOOL)arg7 isNetworkReachable:(BOOL)arg8 networkCheckResult:(unsigned int)arg9 dataRate:(id)arg10 gksError:(id)arg11 connectDuration:(id)arg12 remoteNetworkConnection:(unsigned int)arg13 localNetworkConnection:(unsigned int)arg14 connectionType:(unsigned int)arg15 usesRelay:(BOOL)arg16 currentNATType:(id)arg17 remoteNATType:(id)arg18 relayConnectDuration:(id)arg19 isInitiator:(BOOL)arg20 linkQuality:(id)arg21 gksReturnCode:(id)arg22 ;


@end


#endif