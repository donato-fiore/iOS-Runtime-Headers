// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIGETRESPONSEALTERNATIVESPLAYBACK_H
#define SAUIGETRESPONSEALTERNATIVESPLAYBACK_H



#import "SABaseClientBoundCommand.h"
#import "SAUIGetResponseAlternatives.h"

@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIGetResponseAlternatives *playbackCommand;


+(id)getResponseAlternativesPlayback;
+(id)getResponseAlternativesPlaybackWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif