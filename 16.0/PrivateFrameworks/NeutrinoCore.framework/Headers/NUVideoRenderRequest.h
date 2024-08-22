// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEORENDERREQUEST_H
#define NUVIDEORENDERREQUEST_H

@protocol NUScalePolicy;


#import "NURenderRequest.h"
#import "NUColorSpace.h"

@interface NUVideoRenderRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif