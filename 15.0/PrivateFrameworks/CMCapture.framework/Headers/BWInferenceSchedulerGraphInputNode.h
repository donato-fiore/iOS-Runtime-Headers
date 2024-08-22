// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESCHEDULERGRAPHINPUTNODE_H
#define BWINFERENCESCHEDULERGRAPHINPUTNODE_H

@class NSSet, NSString;
@protocol BWInferenceExtractable, BWInferenceJobProvider, BWInferenceExecutable, BWInferencePropagatable, BWInferenceSubmittable;

#import <Foundation/Foundation.h>


@interface BWInferenceSchedulerGraphInputNode : NSObject <BWInferenceExtractable, BWInferenceJobProvider>

 {
    NSSet *_videoPropagatedToStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVideoPropagatedToStorage:(id)arg0 ;
-(id)newStorage;
-(int)extractFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingVideoRequirements:(id)arg1 metadataRequirements:(id)arg2 toStorage:(id)arg3 ;
-(int)extractFromStorage:(id)arg0 usingVideoRequirements:(id)arg1 metadataRequirements:(id)arg2 toSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;
-(int)prepare;
-(void)dealloc;


@end


#endif