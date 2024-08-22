// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUGEOMETRYJOB_H
#define NUGEOMETRYJOB_H



#import "NURenderJob.h"

@interface NUGeometryJob : NURenderJob



-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsRenderStage;
-(id)geometryRequest;
-(id)result;
-(id)scalePolicy;


@end


#endif