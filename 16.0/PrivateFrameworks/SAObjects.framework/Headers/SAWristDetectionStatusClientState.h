// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWRISTDETECTIONSTATUSCLIENTSTATE_H
#define SAWRISTDETECTIONSTATUSCLIENTSTATE_H



#import "SAAceClientState.h"

@interface SAWristDetectionStatusClientState : SAAceClientState

@property (nonatomic) BOOL wristDetected;


+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)wristDetectionStatusClientState;
+(id)wristDetectionStatusClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif