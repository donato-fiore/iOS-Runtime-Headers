// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWESPRESSOINFERENCECONTEXT_H
#define BWESPRESSOINFERENCECONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BWEspressoInferenceContext : NSObject {
    *void _espressoContext;
    NSUInteger _options;
    BOOL _shareIntermediateBuffer;
    *void _rootIntermediateBufferPlan;
    NSString *_sharedBufferNetworksPath;
}


@property (readonly, nonatomic) *void espressoContext;
@property (readonly, nonatomic) int executionTarget; // ivar: _executionTarget
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;


+(void)initialize;
-(id)description;
-(id)initWithExecutionTarget:(int)arg0 ;
-(id)initWithExecutionTarget:(int)arg0 shareIntermediateBuffer:(BOOL)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPostbuild:(*void)arg0 ;
-(int)configureIntermediateBufferSharingForPlanPrebuild:(*void)arg0 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg0 ;
-(int)prepareForInferenceUsingProcessingSession:(id)arg0 ;
-(void)dealloc;


@end


#endif