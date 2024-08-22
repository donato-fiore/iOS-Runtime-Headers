// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMORPHUNDATASTATE_H
#define SAMORPHUNDATASTATE_H

@class NSDictionary;


#import "SAAceClientState.h"

@interface SAMorphunDataState : SAAceClientState

@property (copy, nonatomic) NSDictionary *assetVersionPerLocale;


+(id)deliveryDeadline;
+(id)morphunDataState;
+(id)morphunDataStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)persistencePolicy;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif