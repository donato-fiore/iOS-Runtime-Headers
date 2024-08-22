// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMUTABLECAMERAADJUSTMENTS_H
#define PFMUTABLECAMERAADJUSTMENTS_H

@class NSString, AVApplePortraitMetadata;


#import "PFCameraAdjustments.h"

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (nonatomic) CGRect cropRect;
@property (nonatomic, getter=isDepthEnabled) BOOL depthEnabled;
@property (copy, nonatomic) NSString *effectFilterName;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (retain, nonatomic) AVApplePortraitMetadata *portraitMetadata;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif