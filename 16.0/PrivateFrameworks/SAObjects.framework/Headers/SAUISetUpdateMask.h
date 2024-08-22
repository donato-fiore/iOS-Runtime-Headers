// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUISETUPDATEMASK_H
#define SAUISETUPDATEMASK_H



#import "SABaseClientBoundCommand.h"

@interface SAUISetUpdateMask : SABaseClientBoundCommand

@property (nonatomic) BOOL shouldHideSiri;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif