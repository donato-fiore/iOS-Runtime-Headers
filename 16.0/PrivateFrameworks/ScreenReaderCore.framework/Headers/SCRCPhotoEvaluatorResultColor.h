// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCPHOTOEVALUATORRESULTCOLOR_H
#define SCRCPHOTOEVALUATORRESULTCOLOR_H



#import "SCRCPhotoEvaluatorResult.h"

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) CGFloat blueLevel; // ivar: _blueLevel
@property (readonly, nonatomic) CGFloat greenLevel; // ivar: _greenLevel
@property (readonly, nonatomic) CGFloat redLevel; // ivar: _redLevel


-(id)humanReadableResult;
-(id)initWithRedLevel:(CGFloat)arg0 blueLevel:(CGFloat)arg1 greenLevel:(CGFloat)arg2 ;


@end


#endif