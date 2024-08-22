// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASSPEECHPARTIALRESULT_H
#define SASSPEECHPARTIALRESULT_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *tokens;


+(id)speechPartialResult;
+(id)speechPartialResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif