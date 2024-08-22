// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCESAMPLEBUFFERPROPAGATOR_H
#define BWINFERENCESAMPLEBUFFERPROPAGATOR_H

@class NSArray, NSString;
@protocol BWInferencePropagatable;

#import <Foundation/Foundation.h>


@interface BWInferenceSampleBufferPropagator : NSObject <BWInferencePropagatable>

 {
    NSArray *_videoRequirements;
    NSArray *_cloneVideoRequirements;
    NSArray *_metadataRequirements;
}


@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithVideoRequirements:(id)arg0 cloneRequirements:(id)arg1 metadataRequirements:(id)arg2 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif