// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCECOMPRESSEDVIDEOREQUIREMENT_H
#define BWINFERENCECOMPRESSEDVIDEOREQUIREMENT_H



#import "BWInferenceVideoRequirement.h"

@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement

@property (readonly, nonatomic) BWInferenceVideoRequirement *uncompressedRequirement; // ivar: _uncompressedRequirement


+(id)newRequirementWithUncompressedRequirement:(id)arg0 supportedCompressionType:(int)arg1 supportedLossyCompressionLevel:(int)arg2 ;
-(BOOL)isSatisfiedByRequirement:(id)arg0 ;
-(NSUInteger)satisfactionHash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif