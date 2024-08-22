// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEVIDEOREQUIREMENT_H
#define BWINFERENCEVIDEOREQUIREMENT_H

@protocol NSCopying;


#import "BWInferenceMediaRequirement.h"
#import "BWInferenceVideoFormat.h"

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying>



@property (readonly, nonatomic) BWInferenceVideoFormat *videoFormat; // ivar: _videoFormat


-(BOOL)isSatisfiedByRequirement:(id)arg0 ;
-(NSUInteger)satisfactionHash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg0 ;
-(id)initWithAttachedMediaKey:(id)arg0 videoFormat:(id)arg1 ;
-(id)initWithVideoRequirement:(id)arg0 ;
-(void)dealloc;


@end


#endif