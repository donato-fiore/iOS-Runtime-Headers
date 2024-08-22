// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTRUCTUREDDICTATIONFAILED_H
#define SASTRUCTUREDDICTATIONFAILED_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *recognition;
@property (copy, nonatomic) NSString *userFacingReasonDescription;
@property (copy, nonatomic) NSString *userFacingReasonTitle;


+(id)structuredDictationFailed;
+(id)structuredDictationFailedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif