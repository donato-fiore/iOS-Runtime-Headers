// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DPYRAMIDLEVELRESOURCES_H
#define TSCH3DPYRAMIDLEVELRESOURCES_H

@class TSUPair;

#import <Foundation/Foundation.h>

#import "TSCH3DPyramidBlurFBOResource.h"

@interface TSCH3DPyramidLevelResources : NSObject {
    TSUPair *_resourcePair;
}


@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource *finalResource;
@property (readonly, nonatomic) tvec2<int> size;
@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource *temporaryResource;


+(id)resourcesWithFBOSize:(struct tvec2<int> )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithFBOSize:(struct tvec2<int> )arg0 ;


@end


#endif