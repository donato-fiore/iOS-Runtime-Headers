// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOCAPTIONSBUFFERINFO_H
#define VCAUDIOCAPTIONSBUFFERINFO_H


#import <Foundation/Foundation.h>


@interface VCAudioCaptionsBufferInfo : NSObject {
    *opaqueVCAudioBufferList _buffer;
}


@property (readonly, nonatomic) unsigned int countOfLowPrioritySamples; // ivar: _countOfLowPrioritySamples
@property (readonly, nonatomic) AudioStreamBasicDescription format; // ivar: _format
@property (readonly, nonatomic) unsigned char priority; // ivar: _priority
@property (readonly, nonatomic) NSInteger token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStreamToken:(NSInteger)arg0 format:(struct AudioStreamBasicDescription )arg1 bufferLength:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif