// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPRESYNTHESIZETTS_H
#define SAPRESYNTHESIZETTS_H

@class NSArray, NSDictionary;


#import "SABaseClientBoundCommand.h"

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *aceAudioData;
@property (copy, nonatomic) NSArray *dialogStrings;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSArray *streamIds;


+(id)preSynthesizeTTS;
+(id)preSynthesizeTTSWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif