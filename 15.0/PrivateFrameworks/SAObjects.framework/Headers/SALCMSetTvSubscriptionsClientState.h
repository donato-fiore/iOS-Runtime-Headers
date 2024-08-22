// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALCMSETTVSUBSCRIPTIONSCLIENTSTATE_H
#define SALCMSETTVSUBSCRIPTIONSCLIENTSTATE_H

@class NSString;
@protocol SAServerBoundCommand, SASetSingleClientState;


#import "SABaseCommand.h"
#import "SALCMTvSubscriptionsClientState.h"

@interface SALCMSetTvSubscriptionsClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SALCMTvSubscriptionsClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setTvSubscriptionsClientState;
+(id)setTvSubscriptionsClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif