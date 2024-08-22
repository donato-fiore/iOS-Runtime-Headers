// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOFILE_H
#define AVAUDIOFILE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AVAudioFile : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) AVAudioFormat *fileFormat;
@property (nonatomic) NSInteger framePosition;
@property (readonly, nonatomic) NSInteger length;
@property (readonly, nonatomic) AVAudioFormat *processingFormat;
@property (readonly, nonatomic) NSURL *url;


-(BOOL)readIntoBuffer:(id)arg0 error:(*id)arg1 ;
-(BOOL)readIntoBuffer:(id)arg0 frameCount:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)writeFromBuffer:(id)arg0 error:(*id)arg1 ;
-(id)initForReading:(id)arg0 commonFormat:(NSUInteger)arg1 interleaved:(BOOL)arg2 error:(*id)arg3 ;
-(id)initForReading:(id)arg0 error:(*id)arg1 ;
-(id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile *)arg0 commonFormat:(NSUInteger)arg1 interleaved:(BOOL)arg2 error:(*id)arg3 ;
-(id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile *)arg0 error:(*id)arg1 ;
-(id)initForWriting:(id)arg0 settings:(id)arg1 commonFormat:(NSUInteger)arg2 interleaved:(BOOL)arg3 error:(*id)arg4 ;
-(id)initForWriting:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;
-(id)initSecondaryReader:(id)arg0 format:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif