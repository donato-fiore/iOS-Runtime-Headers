// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTECOMMANDPARSER_H
#define _TVRCMEDIAREMOTECOMMANDPARSER_H

@class NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _TVRCMediaRemoteCommandParser : NSObject {
    NSArray *_allCommands;
    NSMutableSet *_enabledCommandNames;
}




-(BOOL)_containsAnySkipCommands;
-(BOOL)_containsAnyTrackCommands;
-(BOOL)_containsEnabledCommand:(unsigned int)arg0 ;
-(id)_skipButtons;
-(id)_trackAndSpeedButtons;
-(id)buttonsForCommands:(id)arg0 ;
-(void)_gatherEnabledCommands;


@end


#endif