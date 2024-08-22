// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPOLICYROUTERULE_H
#define NEPOLICYROUTERULE_H

@class NSString, NSUUID;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>



@property NSInteger action; // ivar: _action
@property unsigned int controlUnit; // ivar: _controlUnit
@property (copy) NSString *interfaceName; // ivar: _interfaceName
@property (copy) NSUUID *matchNetworkAgent; // ivar: _matchNetworkAgent
@property (retain) NSUUID *networkAgentUUID; // ivar: _networkAgentUUID
@property NSInteger type; // ivar: _type


+(id)routeRuleWithAction:(NSInteger)arg0 forInterfaceName:(id)arg1 ;
+(id)routeRuleWithAction:(NSInteger)arg0 forNetworkAgent:(id)arg1 ;
+(id)routeRuleWithAction:(NSInteger)arg0 forType:(NSInteger)arg1 ;
-(BOOL)addTLVsToMessage:(id)arg0 ;
-(BOOL)validate;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initInternal;


@end


#endif