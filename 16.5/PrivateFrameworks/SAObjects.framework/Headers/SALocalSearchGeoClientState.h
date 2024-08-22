// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHGEOCLIENTSTATE_H
#define SALOCALSEARCHGEOCLIENTSTATE_H

@class NSArray, NSString;


#import "SAAceClientState.h"

@interface SALocalSearchGeoClientState : SAAceClientState

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSString *environment;


+(id)deliveryDeadline;
+(id)geoClientState;
+(id)geoClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif