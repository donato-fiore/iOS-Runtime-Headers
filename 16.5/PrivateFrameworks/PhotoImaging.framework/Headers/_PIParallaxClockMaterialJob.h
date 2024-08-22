// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXCLOCKMATERIALJOB_H
#define _PIPARALLAXCLOCKMATERIALJOB_H

@class NURenderJob, NSNumber;



@interface _PIParallaxClockMaterialJob : NURenderJob

@property (retain, nonatomic) NSNumber *luminanceValue; // ivar: _luminanceValue


-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)clockMaterialRequest;
-(id)result;
-(id)scalePolicy;


@end


#endif