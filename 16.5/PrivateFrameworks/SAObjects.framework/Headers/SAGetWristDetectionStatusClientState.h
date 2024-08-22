// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGETWRISTDETECTIONSTATUSCLIENTSTATE_H
#define SAGETWRISTDETECTIONSTATUSCLIENTSTATE_H

@class NSString, NSArray;
@protocol SAGetSingleClientState;


#import "SABaseClientBoundCommand.h"
#import "SAWristDetectionStatusClientState.h"

@interface SAGetWristDetectionStatusClientState : SABaseClientBoundCommand <SAGetSingleClientState>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (retain, nonatomic) SAWristDetectionStatusClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getWristDetectionStatusClientState;
+(id)getWristDetectionStatusClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif