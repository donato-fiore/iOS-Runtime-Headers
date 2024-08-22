// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPOLICYROUTERULE_H
#define NEPOLICYROUTERULE_H

@class NSString, NSUUID;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>

 {
    NSInteger _action;
    NSString *_interfaceName;
    NSUUID *_matchNetworkAgent;
    NSInteger _type;
}


@property unsigned int controlUnit; // ivar: _controlUnit
@property (retain) NSUUID *networkAgentUUID; // ivar: _networkAgentUUID


+(id)routeRuleWithAction:(NSInteger)arg0 forInterfaceName:(id)arg1 ;
+(id)routeRuleWithAction:(NSInteger)arg0 forNetworkAgent:(id)arg1 ;
+(id)routeRuleWithAction:(NSInteger)arg0 forType:(NSInteger)arg1 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif