// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXAUDIOSTREAMBASICDESCRIPTION_H
#define SVXAUDIOSTREAMBASICDESCRIPTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXAudioStreamBasicDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int bitsPerChannel; // ivar: _bitsPerChannel
@property (readonly, nonatomic) unsigned int bytesPerFrame; // ivar: _bytesPerFrame
@property (readonly, nonatomic) unsigned int bytesPerPacket; // ivar: _bytesPerPacket
@property (readonly, nonatomic) unsigned int channelsPerFrame; // ivar: _channelsPerFrame
@property (readonly, nonatomic) unsigned int formatFlags; // ivar: _formatFlags
@property (readonly, nonatomic) unsigned int formatID; // ivar: _formatID
@property (readonly, nonatomic) unsigned int framesPerPacket; // ivar: _framesPerPacket
@property (readonly, nonatomic) unsigned int reserved; // ivar: _reserved
@property (readonly, nonatomic) CGFloat sampleRate; // ivar: _sampleRate


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleRate:(CGFloat)arg0 formatID:(unsigned int)arg1 formatFlags:(unsigned int)arg2 bytesPerPacket:(unsigned int)arg3 framesPerPacket:(unsigned int)arg4 bytesPerFrame:(unsigned int)arg5 channelsPerFrame:(unsigned int)arg6 bitsPerChannel:(unsigned int)arg7 reserved:(unsigned int)arg8 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif