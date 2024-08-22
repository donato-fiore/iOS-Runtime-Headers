// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRTRIGGERPHRASEDETECTORNDAPI_H
#define SSRTRIGGERPHRASEDETECTORNDAPI_H


#import <Foundation/Foundation.h>


@interface SSRTriggerPhraseDetectorNDAPI : NSObject {
    *void _novDetect;
    NSUInteger _phId;
}




-(id)analyzeWavData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getSuperVectorWithEndPoint:(NSUInteger)arg0 ;
-(id)initWithConfigPath:(id)arg0 resourcePath:(id)arg1 phId:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)reset;


@end


#endif