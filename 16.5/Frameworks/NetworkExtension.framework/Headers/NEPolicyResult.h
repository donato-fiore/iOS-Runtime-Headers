// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPOLICYRESULT_H
#define NEPOLICYRESULT_H

@class NSString, NSUUID, NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEPolicyResult : NSObject <NEPrettyDescription>

 {
    unsigned int _skipOrder;
    unsigned int _passFlags;
    unsigned int _dropFlags;
    unsigned int _controlUnit;
    unsigned int _serviceData;
    NSInteger _secondaryResultType;
    NSString *_interfaceName;
    NSUUID *_agentUUID;
    NSArray *_routeRules;
}


@property NSInteger resultType; // ivar: _resultType


+(id)allowUnentitled;
+(id)divertSocketToControlUnit:(unsigned int)arg0 ;
+(id)drop;
+(id)dropWithFlags:(unsigned int)arg0 ;
+(id)filterWithControlUnit:(unsigned int)arg0 ;
+(id)netAgentUUID:(id)arg0 ;
+(id)pass;
+(id)passWithFlags:(unsigned int)arg0 ;
+(id)prohibitFilters;
+(id)removeNetworkAgentUUID:(id)arg0 ;
+(id)routeRules:(id)arg0 ;
+(id)scopeSocketToInterfaceName:(id)arg0 ;
+(id)scopeToDirectInterface;
+(id)scopedNetworkAgent:(id)arg0 ;
+(id)skipWithOrder:(unsigned int)arg0 ;
+(id)tunnelIPToInterfaceName:(id)arg0 secondaryResultType:(NSInteger)arg1 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif