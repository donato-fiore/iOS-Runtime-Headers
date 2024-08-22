// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUHISTOGRAMRENDERREQUEST_H
#define NUHISTOGRAMRENDERREQUEST_H

@class NSString;
@protocol NUTimeBased, NUScalePolicy;


#import "NURenderRequest.h"
#import "NUHistogramParameters.h"
#import "NUColorSpace.h"

@interface NUHistogramRenderRequest : NURenderRequest <NUTimeBased>

 {
    NUHistogramParameters *_parameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NUColorSpace *histogramCalculationColorSpace; // ivar: _histogramCalculationColorSpace
@property (copy, nonatomic) NUHistogramParameters *parameters;
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif