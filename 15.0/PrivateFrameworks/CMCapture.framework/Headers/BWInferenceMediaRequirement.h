// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEMEDIAREQUIREMENT_H
#define BWINFERENCEMEDIAREQUIREMENT_H

@class NSString;
@protocol NSCopying;


#import "BWInferenceDataRequirement.h"

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying>



@property (readonly, copy, nonatomic) NSString *attachedMediaKey; // ivar: _attachedMediaKey


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg0 ;
-(id)initWithMediaRequirement:(id)arg0 ;
-(void)dealloc;


@end


#endif