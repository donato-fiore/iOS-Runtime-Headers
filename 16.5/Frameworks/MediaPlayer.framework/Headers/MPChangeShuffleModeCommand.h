// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCHANGESHUFFLEMODECOMMAND_H
#define MPCHANGESHUFFLEMODECOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPChangeShuffleModeCommand : MPRemoteCommand {
    NSArray *_supportedShuffleTypes;
}


@property (nonatomic) NSInteger currentShuffleType; // ivar: _currentShuffleType


-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithType:(NSInteger)arg0 ;
-(id)newCommandEventWithType:(NSInteger)arg0 preservesShuffleMode:(BOOL)arg1 ;
-(void)setSupportedShuffleTypes:(id)arg0 ;


@end


#endif