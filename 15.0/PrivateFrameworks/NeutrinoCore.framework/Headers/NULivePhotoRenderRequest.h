// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NULIVEPHOTORENDERREQUEST_H
#define NULIVEPHOTORENDERREQUEST_H

@protocol NUScalePolicy;


#import "NURenderRequest.h"
#import "NURenderContext.h"
#import "NUColorSpace.h"

@interface NULivePhotoRenderRequest : NURenderRequest {
    NURenderContext *_stillBufferRenderContext;
}


@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)livePhotoRenderResultFromPhotoResponse:(id)arg0 videoResponse:(id)arg1 propertiesResponse:(id)arg2 error:(*id)arg3 ;
-(void)submit:(id)arg0 ;


@end


#endif