// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOFORMAT_H
#define AVAUDIOFORMAT_H

@class NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVAudioChannelLayout.h"

@interface AVAudioFormat : NSObject <NSSecureCoding>

 {
    AudioStreamBasicDescription _asbd;
    AVAudioChannelLayout *_layout;
    NSUInteger _commonFormat;
    *void _reserved;
}


@property (readonly, nonatomic) unsigned int channelCount;
@property (readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property (readonly, nonatomic) NSUInteger commonFormat;
@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription;
@property (readonly, nonatomic, getter=isInterleaved) BOOL interleaved;
@property (retain, nonatomic) NSData *magicCookie;
@property (readonly, nonatomic) CGFloat sampleRate;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic, getter=isStandard) BOOL standard;
@property (readonly, nonatomic) *AudioStreamBasicDescription streamDescription;


+(BOOL)supportsSecureCoding;
+(id)formatWithInvalidSampleRateAndChannelCount;
+(id)settingsFromASBD:(struct AudioStreamBasicDescription *)arg0 channelLayout:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initStandardFormatWithSampleRate:(CGFloat)arg0 channelLayout:(id)arg1 ;
-(id)initStandardFormatWithSampleRate:(CGFloat)arg0 channels:(unsigned int)arg1 ;
-(id)initWithCMAudioFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommonFormat:(NSUInteger)arg0 sampleRate:(CGFloat)arg1 channels:(unsigned int)arg2 interleaved:(BOOL)arg3 ;
-(id)initWithCommonFormat:(NSUInteger)arg0 sampleRate:(CGFloat)arg1 interleaved:(BOOL)arg2 channelLayout:(id)arg3 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithStreamDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(id)initWithStreamDescription:(struct AudioStreamBasicDescription *)arg0 channelLayout:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif