// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXAUDIOSTREAMBASICDESCRIPTIONMUTATION_H
#define _SVXAUDIOSTREAMBASICDESCRIPTIONMUTATION_H

@class NSString;
@protocol SVXAudioStreamBasicDescriptionMutating;

#import <Foundation/Foundation.h>

#import "SVXAudioStreamBasicDescription.h"

@interface _SVXAudioStreamBasicDescriptionMutation : NSObject <SVXAudioStreamBasicDescriptionMutating>

 {
    SVXAudioStreamBasicDescription *_baseModel;
    CGFloat _sampleRate;
    unsigned int _formatID;
    unsigned int _formatFlags;
    unsigned int _bytesPerPacket;
    unsigned int _framesPerPacket;
    unsigned int _bytesPerFrame;
    unsigned int _channelsPerFrame;
    unsigned int _bitsPerChannel;
    unsigned int _reserved;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setBitsPerChannel:(unsigned int)arg0 ;
-(void)setBytesPerFrame:(unsigned int)arg0 ;
-(void)setBytesPerPacket:(unsigned int)arg0 ;
-(void)setChannelsPerFrame:(unsigned int)arg0 ;
-(void)setFormatFlags:(unsigned int)arg0 ;
-(void)setFormatID:(unsigned int)arg0 ;
-(void)setFramesPerPacket:(unsigned int)arg0 ;
-(void)setReserved:(unsigned int)arg0 ;
-(void)setSampleRate:(CGFloat)arg0 ;


@end


#endif