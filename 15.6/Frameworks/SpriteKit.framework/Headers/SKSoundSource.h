// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSOUNDSOURCE_H
#define SKSOUNDSOURCE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SKSoundSource : NSObject {
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}


@property (readonly, nonatomic) int completedBufferCount;
@property (nonatomic) CGFloat gain;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) CGPoint position;
@property (readonly, nonatomic) int queuedBufferCount;
@property (nonatomic) BOOL shouldLoop;


+(id)source;
+(id)sourceWithBuffer:(id)arg0 ;
-(BOOL)play;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)pause;
-(void)purgeCompletedBuffers;
-(void)queueBuffer:(id)arg0 ;
-(void)stop;


@end


#endif