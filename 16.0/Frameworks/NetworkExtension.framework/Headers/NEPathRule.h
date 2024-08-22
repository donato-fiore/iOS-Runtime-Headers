// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPATHRULE_H
#define NEPATHRULE_H

@class NSNumber;
@protocol NEConfigurationValidating, NEPrettyDescription;


#import "NEAppRule.h"

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription>

 {
    NSNumber *_aggregatePersonalCellular;
    NSNumber *_aggregateEnterpriseCellular;
    NSInteger _internalCellularBehavior;
    NSNumber *_aggregatePersonalWiFi;
    NSNumber *_aggregateEnterpriseWiFi;
    NSInteger _internalWiFiBehavior;
}


@property NSInteger cellularBehavior;
@property (readonly, getter=isDefaultPathRule) BOOL defaultPathRule;
@property BOOL denyAll; // ivar: _denyAll
@property BOOL denyCellularFallback; // ivar: _denyCellularFallback
@property BOOL denyMulticast; // ivar: _denyMulticast
@property BOOL isIdentifierExternal; // ivar: _isIdentifierExternal
@property BOOL multicastPreferenceSet; // ivar: _multicastPreferenceSet
@property NSInteger wifiBehavior;


+(BOOL)supportsSecureCoding;
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