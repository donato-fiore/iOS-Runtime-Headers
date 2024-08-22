// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSMUTABLEDISPLAYCONFIGURATIONREQUEST_H
#define FBSMUTABLEDISPLAYCONFIGURATIONREQUEST_H



#import "FBSDisplayConfigurationRequest.h"

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (nonatomic) NSInteger hdrMode;
@property (nonatomic) CGSize nativePixelSize;
@property (nonatomic) NSInteger overscanCompensation;
@property (nonatomic) CGFloat refreshRate;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif