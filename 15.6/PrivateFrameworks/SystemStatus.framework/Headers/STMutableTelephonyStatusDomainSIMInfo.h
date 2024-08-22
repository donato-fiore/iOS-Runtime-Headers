// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLETELEPHONYSTATUSDOMAINSIMINFO_H
#define STMUTABLETELEPHONYSTATUSDOMAINSIMINFO_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STTelephonyStatusDomainSIMInfo.h"

@interface STMutableTelephonyStatusDomainSIMInfo : STTelephonyStatusDomainSIMInfo <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (nonatomic, getter=isSIMPresent) BOOL SIMPresent;
@property (nonatomic, getter=isCallForwardingEnabled) BOOL callForwardingEnabled;
@property (nonatomic) NSUInteger cellularServiceState;
@property (nonatomic) NSUInteger dataNetworkType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) NSUInteger maxSignalStrengthBars;
@property (nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections;
@property (nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection;
@property (nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular;
@property (copy, nonatomic) NSString *secondaryServiceDescription;
@property (copy, nonatomic) NSString *serviceDescription;
@property (nonatomic) NSUInteger serviceState;
@property (copy, nonatomic) NSString *shortLabel;
@property (nonatomic) NSUInteger signalStrengthBars;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif