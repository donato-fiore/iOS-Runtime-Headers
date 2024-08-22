// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCHANGEREPEATMODECOMMAND_H
#define MPCHANGEREPEATMODECOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    NSArray *_supportedRepeatTypes;
}


@property (nonatomic) NSInteger currentRepeatType; // ivar: _currentRepeatType


-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithType:(NSInteger)arg0 ;
-(id)newCommandEventWithType:(NSInteger)arg0 preservesRepeatMode:(BOOL)arg1 ;
-(void)setSupportedRepeatTypes:(id)arg0 ;


@end


#endif