// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIDISPARITYSAMPLEJOB_H
#define PIDISPARITYSAMPLEJOB_H

@class NURenderJob;



@interface PIDisparitySampleJob : NURenderJob

@property (nonatomic) CGRect sampleRect; // ivar: _sampleRect
@property (nonatomic) ? sampleTime; // ivar: _sampleTime
@property (nonatomic) float sampledDisparityValue; // ivar: _sampledDisparityValue


-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputVideo;
-(BOOL)wantsRenderStage;
-(id)result;
-(id)scalePolicy;


@end


#endif