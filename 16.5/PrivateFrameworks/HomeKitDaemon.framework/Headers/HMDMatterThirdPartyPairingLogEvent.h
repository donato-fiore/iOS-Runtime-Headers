// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMATTERTHIRDPARTYPAIRINGLOGEVENT_H
#define HMDMATTERTHIRDPARTYPAIRINGLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMatterThirdPartyPairingLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSNumber *caseSessionSanityCheckPassed; // ivar: _caseSessionSanityCheckPassed
@property (nonatomic) BOOL cleanClose; // ivar: _cleanClose
@property (copy, nonatomic) NSString *client; // ivar: _client
@property (retain, nonatomic) NSNumber *communicationProtocol; // ivar: _communicationProtocol
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (retain, nonatomic) NSNumber *credentialsSentToClient; // ivar: _credentialsSentToClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *discoveredOverBLE; // ivar: _discoveredOverBLE
@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (retain, nonatomic) NSNumber *hasShortDiscriminator; // ivar: _hasShortDiscriminator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *knownToSystemCommissioner; // ivar: _knownToSystemCommissioner
@property (retain, nonatomic) NSNumber *longestStateDuration; // ivar: _longestStateDuration
@property (copy, nonatomic) NSString *longestStateName; // ivar: _longestStateName
@property (retain, nonatomic) NSNumber *matterCategoryNumber; // ivar: _matterCategoryNumber
@property (retain, nonatomic) NSNumber *matterProductID; // ivar: _matterProductID
@property (retain, nonatomic) NSNumber *matterProductNumber; // ivar: _matterProductNumber
@property (retain, nonatomic) NSNumber *matterVendorNumber; // ivar: _matterVendorNumber
@property (retain, nonatomic) NSNumber *pairingDuration; // ivar: _pairingDuration
@property (retain, nonatomic) NSNumber *providedThreadScanResults; // ivar: _providedThreadScanResults
@property (retain, nonatomic) NSNumber *providedWiFiScanResults; // ivar: _providedWiFiScanResults
@property (retain, nonatomic) NSNumber *requiresMatterCustomCommissioningFlow; // ivar: _requiresMatterCustomCommissioningFlow
@property (copy, nonatomic) NSString *serverTransport; // ivar: _serverTransport
@property (retain, nonatomic) NSNumber *success; // ivar: _success
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *supportsSoftAP; // ivar: _supportsSoftAP
@property (retain, nonatomic) NSNumber *underlyingErrorCode; // ivar: _underlyingErrorCode
@property (copy, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;


@end


#endif