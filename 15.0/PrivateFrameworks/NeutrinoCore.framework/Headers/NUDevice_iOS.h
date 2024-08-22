// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUDEVICE_IOS_H
#define NUDEVICE_IOS_H



#import "NUDevice.h"
#import "NURenderer.h"

@interface NUDevice_iOS : NUDevice {
    NURenderer *_renderer;
}




-(NSInteger)_preferredSampleMode;
-(NSUInteger)family;
-(id)_lowPriorityRenderer:(*id)arg0 ;
-(id)_newLowPriorityNoIntermediatesRenderer:(*id)arg0 ;
-(id)_newMetalRendererWithOptions:(id)arg0 ;
-(id)_newNoIntermediatesRenderer:(*id)arg0 ;
-(id)_newRenderer:(*id)arg0 ;
-(id)_newRendererWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)initWithName:(id)arg0 ;


@end


#endif