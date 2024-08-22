// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCECLONEVIDEOREQUIREMENT_H
#define BWINFERENCECLONEVIDEOREQUIREMENT_H

@protocol NSCopying;


#import "BWInferenceVideoRequirement.h"

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying>



@property (readonly, nonatomic) BWInferenceVideoRequirement *sourceVideoRequirement; // ivar: _sourceVideoRequirement


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg0 sourceVideoRequirement:(id)arg1 ;
-(id)initWithCloneVideoRequirement:(id)arg0 ;
-(id)videoFormat;
-(void)dealloc;


@end


#endif