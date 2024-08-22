// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKAUDIOFILEWRITER_H
#define BRKAUDIOFILEWRITER_H

@class NSString;
@protocol BRKAudioWriter;


#import "BRKWriter.h"

@interface BRKAudioFileWriter : BRKWriter <BRKAudioWriter>

 {
    *OpaqueExtAudioFile _audioFile;
    AudioStreamBasicDescription _format;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPath:(id)arg0 ;
-(void)_lock_close;
-(void)_lock_writeSamples:(*short)arg0 count:(NSUInteger)arg1 ;
-(void)close;
-(void)writeSamples:(*short)arg0 count:(NSUInteger)arg1 ;


@end


#endif