// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERATIMELAPSEPOSTERFRAMEGENERATIONREQUEST_H
#define HFCAMERATIMELAPSEPOSTERFRAMEGENERATIONREQUEST_H

@class HMCameraClip;

#import <Foundation/Foundation.h>

#import "HFCameraImageGenerator.h"

@interface HFCameraTimelapsePosterFrameGenerationRequest : NSObject

@property (retain, nonatomic) HMCameraClip *clip; // ivar: _clip
@property (retain, nonatomic) HFCameraImageGenerator *imageGenerator; // ivar: _imageGenerator
@property (nonatomic) CGFloat timelapseOffset; // ivar: _timelapseOffset




@end


#endif