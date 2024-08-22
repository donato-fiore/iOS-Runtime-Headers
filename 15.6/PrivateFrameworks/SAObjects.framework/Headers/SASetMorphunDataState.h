// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETMORPHUNDATASTATE_H
#define SASETMORPHUNDATASTATE_H

@class NSString;
@protocol SAServerBoundCommand, SASetSingleClientState;


#import "SABaseCommand.h"
#import "SAMorphunDataState.h"

@interface SASetMorphunDataState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SAMorphunDataState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setMorphunDataState;
+(id)setMorphunDataStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif