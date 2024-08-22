// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEAUDIODESCRIPTION_H
#define QSSMUTABLEAUDIODESCRIPTION_H



#import "QSSAudioDescription.h"

@interface QSSMutableAudioDescription : QSSAudioDescription

@property (nonatomic) unsigned int bits_per_channel;
@property (nonatomic) unsigned int bytes_per_frame;
@property (nonatomic) unsigned int bytes_per_packet;
@property (nonatomic) unsigned int channels_per_frame;
@property (nonatomic) unsigned int format_flags;
@property (nonatomic) unsigned int format_id;
@property (nonatomic) unsigned int frames_per_packet;
@property (nonatomic) unsigned int reserved;
@property (nonatomic) CGFloat sample_rate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif