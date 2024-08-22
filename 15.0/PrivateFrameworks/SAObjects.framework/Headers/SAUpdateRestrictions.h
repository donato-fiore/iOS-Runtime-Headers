// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUPDATERESTRICTIONS_H
#define SAUPDATERESTRICTIONS_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SAClientStateServerBoundCommand;


#import "SABaseCommand.h"

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand, SAClientStateServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *restrictionsToAdd;
@property (copy, nonatomic) NSArray *restrictionsToRemove;
@property (readonly) Class superclass;


+(id)updateRestrictions;
+(id)updateRestrictionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif