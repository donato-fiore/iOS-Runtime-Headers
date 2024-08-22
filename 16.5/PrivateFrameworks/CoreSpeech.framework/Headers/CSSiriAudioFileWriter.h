// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIRIAUDIOFILEWRITER_H
#define CSSIRIAUDIOFILEWRITER_H

@class NSURL, NSString, NSFileHandle, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSiriAudioFileWriter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _type;
    NSURL *_url;
    NSString *_path;
    *OpaqueExtAudioFile _audioFile;
    AudioStreamBasicDescription _asbd;
    NSFileHandle *_fileHandle;
    NSError *_underlyingError;
}




+(id)_generateTemporaryFileURL;
+(id)_savedAudioFilesDirectory;
// -(id)_initWithType:(NSInteger)arg0 pathGenerator:(id)arg1 xorFileHandle:(unk)arg2 priority:(id)arg3  ;
-(id)init;
-(id)initWithType:(NSInteger)arg0 fileHandle:(id)arg1 priority:(unsigned int)arg2 ;
// -(id)initWithType:(NSInteger)arg0 pathGenerator:(id)arg1 priority:(unk)arg2  ;
-(void)_close;
-(void)_delete;
-(void)appendAudioData:(id)arg0 ;
-(void)cancel;
-(void)configureWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(void)dealloc;
-(void)flushWithCompletion:(id)arg0 ;


@end


#endif