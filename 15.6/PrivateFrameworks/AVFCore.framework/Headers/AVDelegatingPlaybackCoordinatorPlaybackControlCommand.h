// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVDELEGATINGPLAYBACKCOORDINATORPLAYBACKCONTROLCOMMAND_H
#define AVDELEGATINGPLAYBACKCOORDINATORPLAYBACKCONTROLCOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVCoordinatedPlaybackParticipant.h"

@interface AVDelegatingPlaybackCoordinatorPlaybackControlCommand : NSObject

@property (readonly, nonatomic) NSString *expectedCurrentItemIdentifier;
@property (readonly, nonatomic) AVCoordinatedPlaybackParticipant *originator;


-(id)init;
-(id)initInternal;


@end


#endif