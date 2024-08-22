// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACLOCKDELETE_H
#define SACLOCKDELETE_H

@class NSArray;


#import "SADomainCommand.h"

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *clockIds;


-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif