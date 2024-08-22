// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOLBYVISIONMR_H
#define DOLBYVISIONMR_H


#import <Foundation/Foundation.h>


@interface DolbyVisionMR : NSObject {
    ? mrCfg;
    ? mdsExt;
    ? mr;
    ? mrCache;
}




-(?)metadataReconstruction:(?)arg0 dmData:(?)arg1 maxDisplayBrightnessNits:(?)arg2 targetMaxNits:(?)arg3 targetMinNits:(?)arg4 baseMax:(?)arg5 baseMin:(?)arg6 videoFullRangeFlag:(?)arg7 colourPrimariesnumFrames;
-(id)init;
-(void)dealloc;


@end


#endif