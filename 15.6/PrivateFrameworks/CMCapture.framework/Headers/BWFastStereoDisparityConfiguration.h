// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFASTSTEREODISPARITYCONFIGURATION_H
#define BWFASTSTEREODISPARITYCONFIGURATION_H



#import "BWInferenceConfiguration.h"

@interface BWFastStereoDisparityConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) NSInteger disparityPrioritization; // ivar: _disparityPrioritization
@property (readonly, nonatomic) unsigned int disparityType; // ivar: _disparityType
@property (readonly, nonatomic) int fsdNetStereoImagesAlignment; // ivar: _fsdNetStereoImagesAlignment


-(id)initWithInferenceType:(int)arg0 fsdNetStereoImagesAlignment:(int)arg1 disparityType:(unsigned int)arg2 ;


@end


#endif