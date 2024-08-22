// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLERECOGNITIONPROGRESS_H
#define QSSMUTABLERECOGNITIONPROGRESS_H

@class NSString;


#import "QSSRecognitionProgress.h"

@interface QSSMutableRecognitionProgress : QSSRecognitionProgress

@property (nonatomic) int processed_audio_duration_ms;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif