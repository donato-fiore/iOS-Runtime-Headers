// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULE_H
#define HMDNETWORKROUTERFIREWALLRULE_H

@class HMFObject, NSString, NSDictionary;
@protocol HMFLogging;



@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging>



@property (readonly, nonatomic, getter=isCritical) BOOL critical; // ivar: _critical
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *jsonDictionary; // ivar: _jsonDictionary
@property (readonly, nonatomic) NSString *jsonString;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;


+(id)__transportProtocolToString:(unsigned char)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithJSONDictionary:(id)arg0 critical:(BOOL)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 ;


@end


#endif