// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCPHOTOEVALUATORRESULTBLUR_H
#define SCRCPHOTOEVALUATORRESULTBLUR_H



#import "SCRCPhotoEvaluatorResult.h"

@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) CGFloat blurLevel; // ivar: _blurLevel


-(id)humanReadableResult;
-(id)initWithBlurLevel:(CGFloat)arg0 ;


@end


#endif