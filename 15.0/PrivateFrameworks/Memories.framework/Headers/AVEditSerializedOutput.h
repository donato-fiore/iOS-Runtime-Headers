// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVEDITSERIALIZEDOUTPUT_H
#define AVEDITSERIALIZEDOUTPUT_H


#import <Foundation/Foundation.h>


@interface AVEditSerializedOutput : NSObject



+(id)sharedSerialOutput;
+(void)initialize;
-(id)serializeAudioMix:(id)arg0 ;
-(id)serializeComposition:(id)arg0 containingAssetURLs:(id)arg1 ;
-(id)serializeVideoComposition:(id)arg0 ;
-(void)exportSerializedToURL:(id)arg0 withComposition:(id)arg1 andVideoComposition:(id)arg2 andAudioMix:(id)arg3 ;


@end


#endif