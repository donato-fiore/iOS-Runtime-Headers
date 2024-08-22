// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCPHOTOEVALUATORRESULTS_H
#define SCRCPHOTOEVALUATORRESULTS_H


#import <Foundation/Foundation.h>

#import "SCRCPhotoEvaluatorResult.h"

@interface SCRCPhotoEvaluatorResults : NSObject

@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *blurResult; // ivar: _blurResult
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *colorResult; // ivar: _colorResult
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *luminanceResult; // ivar: _luminanceResult


-(id)initWithBlurResult:(id)arg0 colorResult:(id)arg1 luminanceResult:(id)arg2 ;


@end


#endif