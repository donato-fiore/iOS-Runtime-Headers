// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSPEECHFAILURE_H
#define SASSPEECHFAILURE_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (nonatomic) NSInteger errorCode;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *reasonDescription;


+(id)speechFailure;
+(id)speechFailureWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif