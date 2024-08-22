// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUAUXILIARYPROPERTIESRENDERJOB_H
#define NUAUXILIARYPROPERTIESRENDERJOB_H

@protocol NUImageProperties;


#import "NURenderJob.h"

@interface NUAuxiliaryPropertiesRenderJob : NURenderJob {
    id<NUImageProperties> *_imageProperties;
}




-(BOOL)prepare:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsRenderStage;
-(id)result;


@end


#endif