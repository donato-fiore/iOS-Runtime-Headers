// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STTELEPHONYSUBSCRIPTIONINFO_H
#define STTELEPHONYSUBSCRIPTIONINFO_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDebugDescriptionProviding;

#import <Foundation/Foundation.h>


@interface STTelephonySubscriptionInfo : NSObject <NSCopying, NSMutableCopying, BSDebugDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *SIMLabel; // ivar: _SIMLabel
@property (readonly, copy, nonatomic) NSString *SIMStatus; // ivar: _SIMStatus
@property (readonly, nonatomic) NSUInteger callForwardingIndicator; // ivar: _callForwardingIndicator
@property (readonly, nonatomic) NSUInteger cellularRegistrationStatus; // ivar: _cellularRegistrationStatus
@property (readonly, nonatomic) NSUInteger dataConnectionType; // ivar: _dataConnectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *lastKnownNetworkCountryCode; // ivar: _lastKnownNetworkCountryCode
@property (readonly, nonatomic) NSUInteger maxSignalStrengthBars; // ivar: _maxSignalStrengthBars
@property (readonly, nonatomic, getter=isNetworkReselectionNeeded) BOOL networkReselectionNeeded; // ivar: _networkReselectionNeeded
@property (readonly, copy, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (readonly, nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections; // ivar: _preferredForDataConnections
@property (readonly, nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection; // ivar: _providingDataConnection
@property (readonly, nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular; // ivar: _registeredWithoutCellular
@property (readonly, nonatomic) NSInteger registrationRejectionCauseCode; // ivar: _registrationRejectionCauseCode
@property (readonly, nonatomic) NSUInteger registrationStatus; // ivar: _registrationStatus
@property (readonly, copy, nonatomic) NSString *shortSIMLabel; // ivar: _shortSIMLabel
@property (readonly, nonatomic) NSUInteger signalStrengthBars; // ivar: _signalStrengthBars
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithSubscriptionInfo:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif