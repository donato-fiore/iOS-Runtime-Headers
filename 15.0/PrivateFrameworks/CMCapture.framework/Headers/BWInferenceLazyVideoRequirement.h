// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCELAZYVIDEOREQUIREMENT_H
#define BWINFERENCELAZYVIDEOREQUIREMENT_H

@class NSString;
@protocol NSCopying;


#import "BWInferenceVideoRequirement.h"

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying>

 {
    id *_videoFormatProvider;
}


@property (readonly, copy, nonatomic) NSString *preparedByAttachedMediaKey; // ivar: _preparedByAttachedMediaKey


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg0 ;
-(id)initWithAttachedMediaKey:(id)arg0 preparedByAttachedMediaKey:(id)arg1 videoFormatProvider:(id)arg2 ;
-(id)initWithAttachedMediaKey:(id)arg0 videoFormat:(id)arg1 ;
-(id)initWithLazyVideoRequirement:(id)arg0 ;
-(int)prepareForInputInferenceVideoFormat:(id)arg0 ;
-(void)dealloc;


@end


#endif