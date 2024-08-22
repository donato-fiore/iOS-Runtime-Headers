// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKIMPACTEFFECTMEDIAOBJECT_H
#define CKIMPACTEFFECTMEDIAOBJECT_H

@class NSURL;


#import "CKMediaObject.h"

@interface CKImpactEffectMediaObject : CKMediaObject {
    NSURL *_audioFileURL;
}




-(id)fileURL;
-(id)initWithImpactEffectAudioFileURL:(id)arg0 ;


@end


#endif