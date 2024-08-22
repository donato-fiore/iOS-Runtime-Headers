// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOFILEWRITER_H
#define AUDIOFILEWRITER_H


#import <Foundation/Foundation.h>


@interface AudioFileWriter : NSObject {
    BOOL isWriting;
    *OpaqueExtAudioFile fFile;
}




-(id)initWithURL:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 ;
-(short)addSamples:(*void)arg0 len:(NSInteger)arg1 ;
-(void)close;
-(void)dealloc;


@end


#endif