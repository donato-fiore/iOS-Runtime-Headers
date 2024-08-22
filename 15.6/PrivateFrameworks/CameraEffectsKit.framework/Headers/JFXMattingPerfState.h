// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXMATTINGPERFSTATE_H
#define JFXMATTINGPERFSTATE_H

@class PVTaskToken;

#import <Foundation/Foundation.h>

#import "JFXCapturePreviewFrameStats.h"

@interface JFXMattingPerfState : NSObject

@property (readonly, nonatomic) JFXCapturePreviewFrameStats *captureFrameStats; // ivar: _captureFrameStats
@property (readonly, nonatomic) PVTaskToken *signpostToken; // ivar: _signpostToken


+(struct CGSize )mattingDepthInputSize;
-(id)initWithStats:(id)arg0 signpostToken:(id)arg1 ;


@end


#endif