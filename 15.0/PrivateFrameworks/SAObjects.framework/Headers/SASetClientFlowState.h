// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETCLIENTFLOWSTATE_H
#define SASETCLIENTFLOWSTATE_H

@class NSString;
@protocol SAServerBoundCommand, SASetSingleClientState;


#import "SABaseCommand.h"
#import "SAClientFlowState.h"

@interface SASetClientFlowState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SAClientFlowState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setClientFlowState;
+(id)setClientFlowStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif