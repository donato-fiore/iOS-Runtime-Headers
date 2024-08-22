// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUEXPORTJOB_H
#define NUEXPORTJOB_H



#import "NURenderJob.h"

@interface NUExportJob : NURenderJob



-(BOOL)wantsCompleteStage;
-(id)exportRequest;
-(id)initWithExportRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;


@end


#endif