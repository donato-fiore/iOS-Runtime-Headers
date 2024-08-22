// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSAUDIODESCRIPTION_H
#define QSSAUDIODESCRIPTION_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AudioDescription _root;
}


@property (readonly, nonatomic) unsigned int bits_per_channel;
@property (readonly, nonatomic) unsigned int bytes_per_frame;
@property (readonly, nonatomic) unsigned int bytes_per_packet;
@property (readonly, nonatomic) unsigned int channels_per_frame;
@property (readonly, nonatomic) unsigned int format_flags;
@property (readonly, nonatomic) unsigned int format_id;
@property (readonly, nonatomic) unsigned int frames_per_packet;
@property (readonly, nonatomic) unsigned int reserved;
@property (readonly, nonatomic) CGFloat sample_rate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AudioDescription *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AudioDescription *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AudioDescription> )addObjectToBuffer:(*void)arg0 ;


@end


#endif