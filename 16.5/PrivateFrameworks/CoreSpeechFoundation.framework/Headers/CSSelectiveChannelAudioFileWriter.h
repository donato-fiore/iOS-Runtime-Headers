// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSELECTIVECHANNELAUDIOFILEWRITER_H
#define CSSELECTIVECHANNELAUDIOFILEWRITER_H

@class NSArray, NSString, NSURL;
@protocol CSAudioFileWriter;

#import <Foundation/Foundation.h>


@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter>

 {
    BOOL isWriting;
    *OpaqueExtAudioFile fFile;
    AudioStreamBasicDescription inASBD;
    AudioStreamBasicDescription outASBD;
    NSArray *selectedChannelList;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int numberOfChannels; // ivar: _numberOfChannels
@property (readonly) Class superclass;


-(BOOL)addSamples:(*void)arg0 numSamples:(NSInteger)arg1 ;
-(BOOL)endAudio;
-(id)initWithURL:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 channelBitset:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif