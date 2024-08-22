// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIGETRESPONSEALTERNATIVES_H
#define SAUIGETRESPONSEALTERNATIVES_H

@class NSString;


#import "SAStartRequest.h"

@interface SAUIGetResponseAlternatives : SAStartRequest

@property (nonatomic) BOOL locallyResolved;
@property (copy, nonatomic) NSString *requestId;


+(id)getResponseAlternatives;
+(id)getResponseAlternativesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif