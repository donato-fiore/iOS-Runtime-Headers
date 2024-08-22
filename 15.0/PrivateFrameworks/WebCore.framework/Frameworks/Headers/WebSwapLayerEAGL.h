// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBSWAPLAYEREAGL_H
#define WEBSWAPLAYEREAGL_H

@class CAEAGLLayer, EAGLContext;



@interface WebSwapLayerEAGL : CAEAGLLayer {
    EAGLContext *mDisplayContext;
    BOOL initialized;
    ? mSwapState;
    *void mFunctions;
    unsigned int mReadFramebuffer;
}




-(id)initWithSharedState:(struct SharedSwapState *)arg0 withContext:(id)arg1 withFunctions:(*void)arg2 ;
-(void)display;


@end


#endif