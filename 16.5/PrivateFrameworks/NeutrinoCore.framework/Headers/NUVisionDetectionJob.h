// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUVISIONDETECTIONJOB_H
#define NUVISIONDETECTIONJOB_H

@class NSArray;


#import "NURenderJob.h"
#import "NUVisionDetectionRequest.h"

@interface NUVisionDetectionJob : NURenderJob

@property (readonly, nonatomic) NUVisionDetectionRequest *detectionRequest;
@property (copy, nonatomic) NSArray *observations; // ivar: _observations


-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithVisionDetectionRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif