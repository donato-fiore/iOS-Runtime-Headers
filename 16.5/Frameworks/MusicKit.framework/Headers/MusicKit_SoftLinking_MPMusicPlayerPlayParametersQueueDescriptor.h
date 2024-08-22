// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMUSICPLAYERPLAYPARAMETERSQUEUEDESCRIPTOR_H
#define MUSICKIT_SOFTLINKING_MPMUSICPLAYERPLAYPARAMETERSQUEUEDESCRIPTOR_H

@class MPMusicPlayerPlayParametersQueueDescriptor, NSString;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_MPMusicPlayerPlayParameters.h"

@interface MusicKit_SoftLinking_MPMusicPlayerPlayParametersQueueDescriptor : NSObject {
    MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;
}


@property (readonly, nonatomic) MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;
@property (retain, nonatomic) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *containerPlayParameters; // ivar: _containerPlayParameters
@property (copy, nonatomic) NSString *playActivityFeatureName; // ivar: _playActivityFeatureName
@property (retain, nonatomic) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *startItemPlayParameters; // ivar: _startItemPlayParameters


-(id)initWithPlayParametersQueue:(id)arg0 ;
-(void)setEndTime:(CGFloat)arg0 forItemWithPlayParameters:(id)arg1 ;
-(void)setStartTime:(CGFloat)arg0 forItemWithPlayParameters:(id)arg1 ;


@end


#endif