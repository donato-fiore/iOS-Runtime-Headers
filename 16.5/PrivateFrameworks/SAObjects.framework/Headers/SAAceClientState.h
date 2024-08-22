// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAACECLIENTSTATE_H
#define SAACECLIENTSTATE_H



#import "SADomainObject.h"

@interface SAAceClientState : SADomainObject



+(id)aceClientState;
+(id)aceClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)deliveryDeadline;
+(id)persistencePolicy;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif