// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUVIDEOPROPERTIESJOB_H
#define NUVIDEOPROPERTIESJOB_H

@protocol NUVideoProperties;


#import "NURenderJob.h"

@interface NUVideoPropertiesJob : NURenderJob {
    id<NUVideoProperties> *_videoProperties;
}




-(BOOL)prepare:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsRenderStage;
-(id)result;


@end


#endif