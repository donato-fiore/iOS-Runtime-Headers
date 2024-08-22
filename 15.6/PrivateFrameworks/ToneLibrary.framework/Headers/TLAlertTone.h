// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLALERTTONE_H
#define TLALERTTONE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "TLSystemSound.h"

@interface TLAlertTone : NSObject {
    unsigned int _actualSoundID;
    unsigned int _previewSoundID;
    TLSystemSound *_actualSound;
    TLSystemSound *_previewSound;
}


@property (readonly, nonatomic) TLSystemSound *actualSound;
@property (readonly, nonatomic) TLSystemSound *previewSound;
@property (readonly, nonatomic) BOOL requiresLongFormPlayback; // ivar: _requiresLongFormPlayback
@property (readonly, nonatomic) NSURL *soundFileURL; // ivar: _soundFileURL


-(id)initWithSoundFileURL:(id)arg0 actualSoundID:(unsigned int)arg1 previewSoundID:(unsigned int)arg2 requiresLongFormPlayback:(BOOL)arg3 ;


@end


#endif