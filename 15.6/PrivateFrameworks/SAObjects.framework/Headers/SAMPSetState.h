// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPSETSTATE_H
#define SAMPSETSTATE_H



#import "SADomainCommand.h"

@interface SAMPSetState : SADomainCommand

@property (nonatomic) int state;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif