// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUISETSUGGESTEDUTTERANCES_H
#define SAUISETSUGGESTEDUTTERANCES_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *utterances;


+(id)setSuggestedUtterances;
+(id)setSuggestedUtterancesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif