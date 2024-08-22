// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHSETGEOCLIENTSTATE_H
#define SALOCALSEARCHSETGEOCLIENTSTATE_H

@class NSString;
@protocol SAServerBoundCommand, SASetSingleClientState;


#import "SABaseCommand.h"
#import "SALocalSearchGeoClientState.h"

@interface SALocalSearchSetGeoClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SALocalSearchGeoClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setGeoClientState;
+(id)setGeoClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif