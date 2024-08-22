// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIVISUALRESPONSESHOWNEXTSNIPPET_H
#define SAUIVISUALRESPONSESHOWNEXTSNIPPET_H



#import "SABaseClientBoundCommand.h"
#import "SAUIVisualResponseSnippet.h"

@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIVisualResponseSnippet *visualResponse;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif