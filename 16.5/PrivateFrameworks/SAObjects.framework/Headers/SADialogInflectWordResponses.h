// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADIALOGINFLECTWORDRESPONSES_H
#define SADIALOGINFLECTWORDRESPONSES_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SADialogInflectWordResponses : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *inflectWordResponses;


+(id)inflectWordResponsesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif