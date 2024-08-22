// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIAUTOLOOPEXPORTJOB_H
#define PIAUTOLOOPEXPORTJOB_H

@class NUVideoExportJob;



@interface PIAutoLoopExportJob : NUVideoExportJob



+(BOOL)shouldUseMetalRenderer;
+(id)metalRenderer;
-(BOOL)writeVideoFrom:(id)arg0 toWriter:(id)arg1 stillImageTime:(struct ? )arg2 createCustomMetadata:(BOOL)arg3 geometryTransform:(id)arg4 inputSize:(struct CGSize )arg5 outputSize:(struct CGSize )arg6 error:(*id)arg7 ;
-(id)autoLoopExportRequest;
-(id)initWithAutoLoopExportRequest:(id)arg0 ;
-(id)initWithVideoExportRequest:(id)arg0 ;
-(id)renderer:(*id)arg0 ;


@end


#endif