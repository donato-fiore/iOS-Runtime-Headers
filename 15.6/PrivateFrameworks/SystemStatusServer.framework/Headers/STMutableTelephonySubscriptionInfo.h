// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLETELEPHONYSUBSCRIPTIONINFO_H
#define STMUTABLETELEPHONYSUBSCRIPTIONINFO_H

@class NSString;


#import "STTelephonySubscriptionInfo.h"

@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo

@property (copy, nonatomic) NSString *SIMLabel;
@property (copy, nonatomic) NSString *SIMStatus;
@property (nonatomic) NSUInteger callForwardingIndicator;
@property (nonatomic) NSUInteger cellularRegistrationStatus;
@property (nonatomic) NSUInteger dataConnectionType;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *lastKnownNetworkCountryCode;
@property (nonatomic) NSUInteger maxSignalStrengthBars;
@property (nonatomic, getter=isNetworkReselectionNeeded) BOOL networkReselectionNeeded;
@property (copy, nonatomic) NSString *operatorName;
@property (nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections;
@property (nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection;
@property (nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular;
@property (nonatomic) NSInteger registrationRejectionCauseCode;
@property (nonatomic) NSUInteger registrationStatus;
@property (copy, nonatomic) NSString *shortSIMLabel;
@property (nonatomic) NSUInteger signalStrengthBars;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif