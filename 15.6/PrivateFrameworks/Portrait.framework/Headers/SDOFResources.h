// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDOFRESOURCES_H
#define SDOFRESOURCES_H

@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>


@interface SDOFResources : NSObject {
    CGSize _disparitySize;
    CGSize _colorSize;
    id<MTLDevice> *_device;
}


@property (retain, nonatomic) NSObject<MTLTexture> *disparityRefinement_output_tex; // ivar: _disparityRefinement_output_tex
@property (retain, nonatomic) NSObject<MTLTexture> *disparityRefinement_preproc_tex; // ivar: _disparityRefinement_preproc_tex
@property (retain, nonatomic) NSObject<MTLTexture> *disparityRefinement_sampledD_tex; // ivar: _disparityRefinement_sampledD_tex
@property (retain, nonatomic) NSObject<MTLTexture> *disparityRefinement_weightsX_tex; // ivar: _disparityRefinement_weightsX_tex
@property (retain, nonatomic) NSObject<MTLTexture> *disparityRefinement_weightsY_tex; // ivar: _disparityRefinement_weightsY_tex


-(id)disparityRefinementOutputTexture;
-(id)initWithDevice:(id)arg0 colorSize:(struct CGSize )arg1 disparitySize:(struct CGSize )arg2 verbose:(BOOL)arg3 config:(id)arg4 ;
-(struct CGSize )targetSize;


@end


#endif