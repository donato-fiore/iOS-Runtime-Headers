// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPPLAYBACKBUTTON_H
#define SAMPPLAYBACKBUTTON_H

@class NSArray;


#import "SAAceView.h"

@interface SAMPPlaybackButton : SAAceView

@property (copy, nonatomic) NSArray *pauseCommands;
@property (copy, nonatomic) NSArray *playCommands;


+(id)playbackButton;
+(id)playbackButtonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif