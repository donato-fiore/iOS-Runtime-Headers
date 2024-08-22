// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETSIRIPRESENTATIONCLIENTSTATE_H
#define SASETSIRIPRESENTATIONCLIENTSTATE_H

@class NSString;
@protocol SAServerBoundCommand, SASetSingleClientState;


#import "SABaseCommand.h"
#import "SASiriPresentationClientState.h"

@interface SASetSiriPresentationClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SASiriPresentationClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setSiriPresentationClientState;
+(id)setSiriPresentationClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif