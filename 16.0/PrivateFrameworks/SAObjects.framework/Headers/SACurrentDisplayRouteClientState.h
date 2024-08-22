// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACURRENTDISPLAYROUTECLIENTSTATE_H
#define SACURRENTDISPLAYROUTECLIENTSTATE_H

@class NSArray;


#import "SAAceClientState.h"

@interface SACurrentDisplayRouteClientState : SAAceClientState

@property (copy, nonatomic) NSArray *activeDisplayRoutes;


+(id)currentDisplayRouteClientState;
+(id)currentDisplayRouteClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)deliveryDeadline;
+(id)persistencePolicy;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif