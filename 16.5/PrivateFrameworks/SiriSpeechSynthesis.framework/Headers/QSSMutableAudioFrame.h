// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEAUDIOFRAME_H
#define QSSMUTABLEAUDIOFRAME_H

@class NSData;


#import "QSSAudioFrame.h"

@interface QSSMutableAudioFrame : QSSAudioFrame

@property (copy, nonatomic) NSData *audio_bytes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio_bytes:(id)arg0 ;


@end


#endif