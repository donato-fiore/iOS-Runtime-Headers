// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPATHRULE_H
#define NEPATHRULE_H

@class NSNumber;
@protocol NEConfigurationValidating, NEPrettyDescription;


#import "NEAppRule.h"

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription>



@property (retain) NSNumber *aggregateEnterpriseCellular; // ivar: _aggregateEnterpriseCellular
@property (retain) NSNumber *aggregateEnterpriseWiFi; // ivar: _aggregateEnterpriseWiFi
@property (retain) NSNumber *aggregatePersonalCellular; // ivar: _aggregatePersonalCellular
@property (retain) NSNumber *aggregatePersonalWiFi; // ivar: _aggregatePersonalWiFi
@property NSInteger cellularBehavior;
@property (readonly, getter=isDefaultPathRule) BOOL defaultPathRule;
@property BOOL denyCellularFallback; // ivar: _denyCellularFallback
@property BOOL denyMulticast; // ivar: _denyMulticast
@property NSInteger internalCellularBehavior; // ivar: _internalCellularBehavior
@property NSInteger internalWiFiBehavior; // ivar: _internalWiFiBehavior
@property BOOL isIdentifierExternal; // ivar: _isIdentifierExternal
@property BOOL multicastPreferenceSet; // ivar: _multicastPreferenceSet
@property NSInteger wifiBehavior;


+(BOOL)supportsSecureCoding;
+(NSInteger)aggregateNetworkBehavior:(NSInteger)arg0 other:(NSInteger)arg1 ;
-(BOOL)isAggregateRule;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)signingIdentifierAllowed:(id)arg0 domainsOrAccountsRequired:(*BOOL)arg1 ;
-(BOOL)supportsCellularBehavior:(NSInteger)arg0 ;
-(BOOL)supportsWiFiBehavior:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initDefaultPathRule;
-(id)initWithCoder:(id)arg0 ;
-(void)addCellularBehavior:(NSInteger)arg0 grade:(NSInteger)arg1 ;
-(void)addWiFiBehavior:(NSInteger)arg0 grade:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif