// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADIRECTINVOCATIONUPDATEREADINGSTATE_H
#define SADIRECTINVOCATIONUPDATEREADINGSTATE_H

@class NSString;
@protocol SAClientStateServerBoundCommand;


#import "SAUpdateReadingState.h"

@interface SADirectInvocationUpdateReadingState : SAUpdateReadingState <SAClientStateServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif