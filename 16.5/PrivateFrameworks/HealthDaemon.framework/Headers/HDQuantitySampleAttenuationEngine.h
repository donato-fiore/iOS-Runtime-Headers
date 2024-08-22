// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUANTITYSAMPLEATTENUATIONENGINE_H
#define HDQUANTITYSAMPLEATTENUATIONENGINE_H

@class NSError;
@protocol HDQuantitySampleAttenuationEngineDelegate;

#import <Foundation/Foundation.h>


@interface HDQuantitySampleAttenuationEngine : NSObject {
    ? _samplesLoadedFromDelegate;
    NSInteger _sampleCountFromDelegate;
    NSInteger _currentSampleIndex;
    BOOL _noMoreDelegateSamples;
    NSInteger _delegateLoadErrorCount;
    NSError *_delegateLoadFirstError;
}


@property (weak, nonatomic) NSObject<HDQuantitySampleAttenuationEngineDelegate> *attenuationEngineDelegate; // ivar: _attenuationEngineDelegate


-(BOOL)delegateLoadingWasSuccessful:(*id)arg0 ;
-(id)initWithAttenuationEngineDelegate:(id)arg0 ;
-(struct ? )attenuateSample:(struct ? )arg0 ;


@end


#endif