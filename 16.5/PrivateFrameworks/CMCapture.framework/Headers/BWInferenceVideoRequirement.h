// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCEVIDEOREQUIREMENT_H
#define BWINFERENCEVIDEOREQUIREMENT_H

@protocol NSCopying;


#import "BWInferenceMediaRequirement.h"
#import "BWInferenceVideoFormat.h"

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying>



@property (readonly, nonatomic) BWInferenceVideoFormat *videoFormat; // ivar: _videoFormat
@property (readonly, nonatomic) int videoStorageType; // ivar: _videoStorageType


-(BOOL)isSatisfiedByRequirement:(id)arg0 ;
-(NSUInteger)satisfactionHash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg0 videoFormat:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg0 videoFormat:(id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithAttachedMediaKey:(id)arg0 videoFormat:(id)arg1 videoStorageType:(int)arg2 ;
-(id)initWithVideoRequirement:(id)arg0 ;
-(void)dealloc;


@end


#endif