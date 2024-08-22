// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETRESTRICTIONS_H
#define SASETRESTRICTIONS_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SAClientStateServerBoundCommand;


#import "SABaseCommand.h"

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand, SAClientStateServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *restrictions;
@property (readonly) Class superclass;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif