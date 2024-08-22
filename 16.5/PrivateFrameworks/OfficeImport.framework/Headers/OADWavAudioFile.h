// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADWAVAUDIOFILE_H
#define OADWAVAUDIOFILE_H



#import "OADEmbeddedMediaFile.h"

@interface OADWavAudioFile : OADEmbeddedMediaFile

@property (nonatomic) float duration; // ivar: mDuration
@property (nonatomic) BOOL hasDuration; // ivar: mHasDuration


-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg0 ;


@end


#endif