// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASSETMULTILINGUALDICTATIONCONFIG_H
#define SASSETMULTILINGUALDICTATIONCONFIG_H

@class NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (nonatomic) BOOL multilingualDisabled;
@property (copy, nonatomic) NSNumber *multilingualTimeoutInMillis;


+(id)setMultilingualDictationConfig;
+(id)setMultilingualDictationConfigWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif