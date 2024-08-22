// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPLAINAUDIOFILEWRITER_H
#define CSPLAINAUDIOFILEWRITER_H

@class NSString, NSURL;
@protocol CSAudioFileWriter;

#import <Foundation/Foundation.h>


@interface CSPlainAudioFileWriter : NSObject <CSAudioFileWriter>

 {
    BOOL isWriting;
    *OpaqueExtAudioFile fFile;
    AudioStreamBasicDescription inASBD;
    AudioStreamBasicDescription outASBD;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)saveAudioChunck:(id)arg0 toURL:(id)arg1 ;
-(BOOL)addSamples:(*void)arg0 numSamples:(NSInteger)arg1 ;
-(BOOL)endAudio;
-(id)initWithFilepath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 ;
-(void)addContextKey:(id)arg0 fromMetaFile:(id)arg1 ;
-(void)addContextKey:(id)arg0 withContext:(id)arg1 ;
-(void)createAcousticMetaFileForContext:(id)arg0 withContext:(id)arg1 ;
-(void)dealloc;


@end


#endif