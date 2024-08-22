// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNAUDIOSOURCE_H
#define SCNAUDIOSOURCE_H

@class AVAudioFile, AVAudioPCMBuffer, NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding>

 {
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    BOOL _loaded;
}


@property (nonatomic) BOOL loops; // ivar: _loops
@property (nonatomic, getter=isPositional) BOOL positional; // ivar: positional
@property (nonatomic) float rate; // ivar: rate
@property (nonatomic) float reverbBlend; // ivar: reverbBlend
@property (nonatomic) BOOL shouldStream; // ivar: _shouldStream
@property (nonatomic) float volume; // ivar: volume


+(BOOL)supportsSecureCoding;
+(id)audioSourceNamed:(id)arg0 ;
+(id)audioSourceWithAVAudioPCMBuffer:(id)arg0 ;
-(CGFloat)duration;
-(NSInteger)renderingAlgorithm;
-(id)audioBuffer;
-(id)audioBufferFormat;
-(id)audioFile;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileName;
-(id)initWithAVAudioPCMBuffer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileNamed:(id)arg0 ;
-(id)initWithFileNamed:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)_customDecodingOfSCNAudioSource:(id)arg0 ;
-(void)_customEncodingOfSCNAudioSource:(id)arg0 ;
-(void)_load;
-(void)_loadURLWithBundle:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)load;
-(void)loadIfNeeded;


@end


#endif