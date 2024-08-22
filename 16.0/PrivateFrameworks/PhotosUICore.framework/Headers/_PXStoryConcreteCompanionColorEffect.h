// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYCONCRETECOMPANIONCOLOREFFECT_H
#define _PXSTORYCONCRETECOMPANIONCOLOREFFECT_H

@protocol PXStoryCompanionColorEffect;

#import <Foundation/Foundation.h>

#import "PXGColorLookupCube.h"

@interface _PXStoryConcreteCompanionColorEffect : NSObject <PXStoryCompanionColorEffect>



@property (readonly, nonatomic) PXGColorLookupCube *colorLookupCube; // ivar: _colorLookupCube


-(id)createMetalTextureWithDevice:(id)arg0 ;
-(id)initWithColorLookupCube:(id)arg0 ;


@end


#endif