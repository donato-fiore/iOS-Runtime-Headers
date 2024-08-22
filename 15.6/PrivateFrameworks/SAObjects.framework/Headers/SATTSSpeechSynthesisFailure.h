// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATTSSPEECHSYNTHESISFAILURE_H
#define SATTSSPEECHSYNTHESISFAILURE_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand

@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reasonDescription;


+(id)speechSynthesisFailure;
+(id)speechSynthesisFailureWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif