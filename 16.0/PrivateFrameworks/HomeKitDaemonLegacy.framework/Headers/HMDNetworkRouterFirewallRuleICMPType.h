// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEICMPTYPE_H
#define HMDNETWORKROUTERFIREWALLRULEICMPTYPE_H

@class NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterFirewallRuleICMPType : NSObject

@property (readonly, nonatomic) NSDictionary *jsonDictionary; // ivar: _jsonDictionary
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) unsigned char protocol; // ivar: _protocol
@property (readonly, nonatomic) NSNumber *typeValue; // ivar: _typeValue


+(id)createListWithJSONDictionary:(id)arg0 key:(id)arg1 ;
+(id)createWithJSONDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithJSONDictionary:(id)arg0 protocol:(unsigned char)arg1 typeValue:(id)arg2 ;


@end


#endif