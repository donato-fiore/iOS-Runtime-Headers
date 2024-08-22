// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVIAUDIOFILEWRITER_H
#define NVIAUDIOFILEWRITER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface NviAudioFileWriter : NSObject {
    *OpaqueExtAudioFile fFile;
    AudioStreamBasicDescription inASBD;
    AudioStreamBasicDescription outASBD;
}


@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(id)initWithURL:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 ;
-(void)addSamples:(*void)arg0 numSamples:(NSInteger)arg1 ;
-(void)dealloc;
-(void)endAudio;


@end


#endif