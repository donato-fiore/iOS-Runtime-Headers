// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSESSIONCOMPLETED_H
#define IDSSESSIONCOMPLETED_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) unsigned int clientType; // ivar: _clientType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int destinationType; // ivar: _destinationType
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSNumber *durationOfSession; // ivar: _durationOfSession
@property (readonly, nonatomic) NSNumber *durationToConnect; // ivar: _durationToConnect
@property (readonly, nonatomic) unsigned int endedReason; // ivar: _endedReason
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCellularInterfaceDisallowed; // ivar: _isCellularInterfaceDisallowed
@property (readonly, nonatomic) BOOL isInitiator; // ivar: _isInitiator
@property (readonly, nonatomic) BOOL isNetworkActive; // ivar: _isNetworkActive
@property (readonly, nonatomic) BOOL isNetworkEnabled; // ivar: _isNetworkEnabled
@property (readonly, nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable
@property (readonly, nonatomic) BOOL isQREnabled; // ivar: _isQREnabled
@property (readonly, nonatomic) BOOL isScreenSharingSessionType; // ivar: _isScreenSharingSessionType
@property (readonly, nonatomic) BOOL isUsingQRDirectly; // ivar: _isUsingQRDirectly
@property (readonly, nonatomic) BOOL isWifiInterfaceDisallowed; // ivar: _isWifiInterfaceDisallowed
@property (readonly, nonatomic) BOOL isWithDefaultPairedDevice; // ivar: _isWithDefaultPairedDevice
@property (readonly, nonatomic) unsigned int linkProtocol; // ivar: _linkProtocol
@property (readonly, nonatomic) unsigned int linkType; // ivar: _linkType
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *protocolVersionNumber; // ivar: _protocolVersionNumber
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int transportType; // ivar: _transportType


-(id)initWithGuid:(id)arg0 protocolVersionNumber:(id)arg1 serviceName:(id)arg2 clientType:(unsigned int)arg3 isQREnabled:(BOOL)arg4 isUsingQRDirectly:(BOOL)arg5 isInitiator:(BOOL)arg6 isScreenSharingSessionType:(BOOL)arg7 isWithDefaultPairedDevice:(BOOL)arg8 transportType:(unsigned int)arg9 linkType:(unsigned int)arg10 linkProtocol:(unsigned int)arg11 endedReason:(unsigned int)arg12 destinationType:(unsigned int)arg13 durationOfSession:(id)arg14 durationToConnect:(id)arg15 isNetworkEnabled:(BOOL)arg16 isNetworkActive:(BOOL)arg17 isNetworkReachable:(BOOL)arg18 isWifiInterfaceDisallowed:(BOOL)arg19 isCellularInterfaceDisallowed:(BOOL)arg20 ;


@end


#endif