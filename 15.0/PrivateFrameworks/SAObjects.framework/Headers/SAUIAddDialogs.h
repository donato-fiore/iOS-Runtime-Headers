// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIADDDIALOGS_H
#define SAUIADDDIALOGS_H

@class NSArray, NSNumber;


#import "SABaseClientBoundCommand.h"
#import "SAUIListenAfterSpeakingBehavior.h"

@interface SAUIAddDialogs : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *dialogs;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif