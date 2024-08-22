// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOBUFFER_H
#define AVAUDIOBUFFER_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying>

 {
    *void _impl;
    id *_deallocator;
}


@property (readonly, nonatomic) *AudioBufferList audioBufferList;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) *AudioBufferList mutableAudioBufferList;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFormat:(id)arg0 byteCapacity:(unsigned int)arg1 ;
-(id)initWithPCMFormat:(id)arg0 byteCapacity:(unsigned int)arg1 bufferListNoCopy:(struct AudioBufferList *)arg2 deallocator:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(unsigned int)byteCapacity;
-(unsigned int)byteLength;
-(void)dealloc;
-(void)setByteLength:(unsigned int)arg0 ;


@end


#endif