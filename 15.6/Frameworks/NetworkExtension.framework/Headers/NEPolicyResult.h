// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPOLICYRESULT_H
#define NEPOLICYRESULT_H

@class NSUUID, NSString, NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEPolicyResult : NSObject <NEPrettyDescription>



@property (copy) NSUUID *agentUUID; // ivar: _agentUUID
@property unsigned int controlUnit; // ivar: _controlUnit
@property unsigned int dropFlags; // ivar: _dropFlags
@property (copy) NSString *interfaceName; // ivar: _interfaceName
@property unsigned int passFlags; // ivar: _passFlags
@property NSInteger resultType; // ivar: _resultType
@property (copy) NSArray *routeRules; // ivar: _routeRules
@property NSInteger secondaryResultType; // ivar: _secondaryResultType
@property unsigned int serviceData; // ivar: _serviceData
@property (copy) NSUUID *serviceUUID; // ivar: _serviceUUID
@property unsigned int skipOrder; // ivar: _skipOrder


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
+(id)triggerScopedService:(id)arg0 data:(unsigned int)arg1 ;
+(id)tunnelIPToInterfaceName:(id)arg0 secondaryResultType:(NSInteger)arg1 ;
-(BOOL)addTLVsToMessage:(id)arg0 ;
-(BOOL)validate;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initInternal;


@end


#endif