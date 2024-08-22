// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWPATH_H
#define NWPATH_H

@class NSUUID, NSArray, NSString;
@protocol NWPrettyDescription, OS_nw_path;

#import <Foundation/Foundation.h>

#import "NWAdvertiseDescriptor.h"
#import "NWBrowseDescriptor.h"
#import "NWInterface.h"
#import "NWParameters.h"
#import "NWEndpoint.h"

@interface NWPath : NSObject <NWPrettyDescription>



@property (readonly, nonatomic) NWAdvertiseDescriptor *advertiseDescriptor;
@property (readonly, nonatomic) NWBrowseDescriptor *browseDescriptor;
@property (readonly, nonatomic) NSObject<OS_nw_path> *cPath;
@property (readonly, nonatomic) NSUUID *clientID;
@property (readonly, nonatomic) NWInterface *connectedInterface;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, nonatomic) NWParameters *derivedParameters;
@property (readonly, nonatomic, getter=isDirect) BOOL direct;
@property (readonly, nonatomic) NSArray *dnsSearchDomains;
@property (readonly, nonatomic) NSArray *dnsServers;
@property (readonly, nonatomic) NSArray *dnsServersAsStrings;
@property (readonly, nonatomic) int dnsServiceID;
@property (readonly, nonatomic) NWEndpoint *effectiveLocalEndpoint;
@property (readonly, nonatomic) NWEndpoint *effectiveRemoteEndpoint;
@property (readonly, nonatomic, getter=isEligibleForCrazyIvan46) BOOL eligibleForCrazyIvan46;
@property (readonly, nonatomic) NWEndpoint *endpoint;
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, nonatomic) BOOL fallbackEligible;
@property (readonly, nonatomic) NWInterface *fallbackInterface;
@property (readonly, nonatomic) unsigned int fallbackInterfaceIndex;
@property (readonly, nonatomic) BOOL fallbackIsPreferred;
@property (readonly, nonatomic) BOOL fallbackIsWeak;
@property (readonly, nonatomic) unsigned int filterControlUnit;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, nonatomic, getter=isFlowDivert) BOOL flowDivert;
@property (readonly, nonatomic) unsigned int flowDivertAggregateUnit;
@property (readonly, nonatomic) unsigned int flowDivertControlUnit;
@property (readonly, nonatomic) NSArray *flows;
@property (readonly, nonatomic) NSArray *gateways;
@property (readonly, nonatomic) NSArray *groupMembers;
@property (readonly, nonatomic) BOOL hasAdvertiseDescriptor;
@property (readonly, nonatomic) BOOL hasApplicationLevelFirewall;
@property (readonly, nonatomic) BOOL hasBrowseDescriptor;
@property (readonly, nonatomic) BOOL hasCustomPFRules;
@property (readonly, nonatomic) BOOL hasKernelExtensionFilter;
@property (readonly, nonatomic) BOOL hasParentalControls;
@property (readonly, nonatomic) BOOL hasProxySettings;
@property (readonly, nonatomic) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path> *internalPath; // ivar: _internalPath
@property (readonly, nonatomic, getter=isListener) BOOL listener;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) NSInteger maximumDatagramSize;
@property (readonly, nonatomic) NSInteger mtu;
@property (readonly, nonatomic) NSArray *overrideDNSSearchDomains;
@property (readonly, nonatomic) NSArray *overrideDNSServers;
@property (readonly, nonatomic) NSArray *overrideDNSServersAsStrings;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic, getter=isPerAppVPN) BOOL perAppVPN;
@property (readonly, nonatomic) unsigned int policyID;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSArray *proxySettings;
@property (readonly, nonatomic) NSInteger reason;
@property (readonly, nonatomic) NSString *reasonDescription;
@property (readonly, nonatomic, getter=isRoaming) BOOL roaming;
@property (readonly, nonatomic) NWInterface *scopedInterface;
@property (readonly, nonatomic) NSUInteger secondsSinceInterfaceChange;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, nonatomic) NSString *statusAsString;
@property (readonly, nonatomic) BOOL supportsDNS;
@property (readonly, nonatomic) BOOL supportsIPv4;
@property (readonly, nonatomic) BOOL supportsIPv6;
@property (readonly, nonatomic, getter=isViable) BOOL viable;


+(id)allClientIDs;
+(id)createStringFromStatus:(NSInteger)arg0 ;
+(id)pathForClientID:(id)arg0 ;
+(id)pathForClientID:(id)arg0 parametersTLV:(id)arg1 pathResultTLV:(id)arg2 ;
+(id)pathWithProtocolBufferData:(id)arg0 ;
-(BOOL)hasUnsatisfiedFallbackAgent;
-(BOOL)isEqualToPath:(id)arg0 ;
-(BOOL)isLinkQualityAbort;
-(BOOL)shouldProbeConnectivity;
-(BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg0 triggerImmediately:(*BOOL)arg1 ;
-(BOOL)usesInterfaceType:(NSInteger)arg0 ;
-(BOOL)usesNetworkAgent:(id)arg0 ;
-(BOOL)usesNetworkAgentType:(Class)arg0 ;
-(id)copyDNSSearchDomains:(BOOL)arg0 ;
-(id)copyDNSServerEndpoints:(BOOL)arg0 ;
-(id)copyDNSServersStrings:(id)arg0 ;
-(id)copyFlowDivertToken;
-(id)createProtocolBufferObject;
-(id)delegateInterface;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)genericNetworkAgentsWithDomain:(id)arg0 type:(id)arg1 ;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)networkAgentsOfType:(Class)arg0 ;


@end


#endif