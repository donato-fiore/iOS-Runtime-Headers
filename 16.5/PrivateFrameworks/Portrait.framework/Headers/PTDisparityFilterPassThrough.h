// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDISPARITYFILTERPASSTHROUGH_H
#define PTDISPARITYFILTERPASSTHROUGH_H

@class NSString;
@protocol PTAbstractDisparityFilter, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PTUtil.h"

@interface PTDisparityFilterPassThrough : NSObject <PTAbstractDisparityFilter>

 {
    id<MTLCommandQueue> *_commandQueue;
    PTUtil *_util;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)debugTextures:(id)arg0 ;
-(id)debugTexturesNames;
-(id)initWithCommandQueue:(id)arg0 ;
-(int)prepareFilter:(id)arg0 inRGBA:(id)arg1 outDisplacement:(id)arg2 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inDisparityPrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 disparityBias:(float)arg5 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inStatePrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 outState:(id)arg5 ;
-(void)reset;


@end


#endif