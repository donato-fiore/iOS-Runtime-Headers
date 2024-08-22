// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTTOSPEECHUSERVOICEPROFILE_H
#define QSSMUTABLETEXTTOSPEECHUSERVOICEPROFILE_H



#import "QSSTextToSpeechUserVoiceProfile.h"

@interface QSSMutableTextToSpeechUserVoiceProfile : QSSTextToSpeechUserVoiceProfile

@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif