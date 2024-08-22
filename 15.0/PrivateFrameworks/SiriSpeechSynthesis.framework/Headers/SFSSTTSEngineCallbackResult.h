// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSTTSENGINECALLBACKRESULT_H
#define SFSSTTSENGINECALLBACKRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface SFSSTTSEngineCallbackResult : NSObject {
    vector<unsigned char, std::allocator<unsigned char>> _pcmDataBuffer;
    vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> _marker;
}


@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (copy, nonatomic) id *beginCallback; // ivar: _beginCallback
@property (copy, nonatomic) id *chunkCallback; // ivar: _chunkCallback
@property (copy, nonatomic) id *endCallback; // ivar: _endCallback
@property (readonly, nonatomic) NSError *error; // ivar: _error


-(*void)marker;
-(*void)pcmDataBuffer;
// -(id)initWithBeginCallback:(id)arg0 chunkCallback:(unk)arg1 endCallback:(id)arg2  ;
-(id)pcmData;
-(int)synthesisCallback:(int)arg0 ;


@end


#endif