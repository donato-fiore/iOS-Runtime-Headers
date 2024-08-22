// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTEFFECTDISPARITYFILTER_H
#define PTEFFECTDISPARITYFILTER_H

@protocol MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PTEffectUtil.h"

@interface PTEffectDisparityFilter : NSObject {
    id<MTLCommandQueue> *_commandQueue;
    PTEffectUtil *_effectUtil;
}




-(id)debugTexture;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 effectUtil:(id)arg2 ;
-(unsigned int)applyFilter:(id)arg0 inOutFilteredDisparity:(id)arg1 updateCoefficient:(float)arg2 ;
-(unsigned int)prepareFilter:(id)arg0 network:(id)arg1 ;
-(unsigned int)reset;


@end


#endif