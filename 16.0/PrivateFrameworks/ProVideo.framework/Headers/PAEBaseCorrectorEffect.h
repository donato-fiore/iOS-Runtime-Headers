// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEBASECORRECTOREFFECT_H
#define PAEBASECORRECTOREFFECT_H

@protocol FxFilter, PROAPIAccessing, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PAEBaseCorrectorEffect : NSObject <FxFilter>

 {
    id<PROAPIAccessing> *_apiManager;
    *void _resyncOnce;
    NSObject<OS_dispatch_queue> *_resyncQueue;
    _opaque_pthread_mutex_t _resyncMutex;
    _opaque_pthread_cond_t _resyncCondition;
    *void _actionCount;
    int _hostApplication;
}


@property (readonly) NSObject<PROAPIAccessing> *apiManager;


+(NSUInteger)colorPrimaries:(id)arg0 ;
+(id)getterAPI:(id)arg0 ;
+(id)keyframingAPI:(id)arg0 ;
+(id)setterAPI:(id)arg0 ;
+(id)temporalImageAPI:(id)arg0 ;
-(*void)newNodeForCorrector;
-(?)_resyncAtTimeapiManager;
-(?)_resyncOnceAtTimeapiManager;
-(?)resync:(?)arg0 atTime:(?)arg1 paramIDcustomChannelData;
-(?)resyncOnceatTime;
-(?)resyncatTime;
-(BOOL)addParameters;
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(BOOL)hostIsFCP;
-(BOOL)hostIsMotion;
-(BOOL)isACEScctGammaCorrected;
-(BOOL)oscIsPublishable;
-(BOOL)overrideRender:(id)arg0 withOutputImage:(id)arg1 inputImage:(id)arg2 input:(*void)arg3 withInfo:(struct ? )arg4 ;
-(BOOL)parameterChanged:(id)arg0 atTime:(struct ? )arg1 paramID:(unsigned int)arg2 customChannelData:(id)arg3 ;
-(BOOL)renderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)variesOverTime;
-(id)customChannelData:(id)arg0 ofParamID:(unsigned int)arg1 time:(struct ? )arg2 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)parameterCreationAPI;
-(id)properties;
-(id)versionsingAPI;
-(void)dealloc;
-(void)setParameters:(id)arg0 onNodeCorrector:(*void)arg1 time:(struct ? )arg2 ;


@end


#endif