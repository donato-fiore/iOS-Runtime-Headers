// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUGEOMETRYREQUEST_H
#define NUGEOMETRYREQUEST_H

@protocol NUScalePolicy;


#import "NURenderRequest.h"

@interface NUGeometryRequest : NURenderRequest

@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif