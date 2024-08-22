// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACLIENTFLOWSTATE_H
#define SACLIENTFLOWSTATE_H

@class NSDictionary;


#import "SAAceClientState.h"

@interface SAClientFlowState : SAAceClientState

@property (copy, nonatomic) NSDictionary *cachedDomainClassJavascriptChecksumMap;


+(id)clientFlowState;
+(id)clientFlowStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)deliveryDeadline;
+(id)persistencePolicy;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif