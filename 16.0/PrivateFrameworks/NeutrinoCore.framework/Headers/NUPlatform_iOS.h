// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPLATFORM_IOS_H
#define NUPLATFORM_IOS_H



#import "NUPlatform.h"

@interface NUPlatform_iOS : NUPlatform



-(BOOL)defaultSupportsLiveVideoRendering;
-(BOOL)supportsANE;
-(id)deviceForDisplay:(id)arg0 ;
-(id)displays;
-(id)init;
-(id)mainDevice;
-(id)mainDisplay;


@end


#endif