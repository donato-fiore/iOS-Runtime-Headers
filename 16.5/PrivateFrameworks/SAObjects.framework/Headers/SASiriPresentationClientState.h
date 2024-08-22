// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASIRIPRESENTATIONCLIENTSTATE_H
#define SASIRIPRESENTATIONCLIENTSTATE_H



#import "SAAceClientState.h"

@interface SASiriPresentationClientState : SAAceClientState

@property (nonatomic) BOOL isFullScreen;


+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)siriPresentationClientState;
+(id)siriPresentationClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif