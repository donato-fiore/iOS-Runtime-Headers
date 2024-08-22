// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTIMELINECROP_H
#define PXTIMELINECROP_H


#import <Foundation/Foundation.h>


@interface PXTimelineCrop : NSObject

@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) CGFloat cropScore; // ivar: _cropScore


+(id)cropForAsset:(id)arg0 withTargetSize:(struct CGSize )arg1 ;
-(id)description;
-(id)initWithCrop:(struct CGRect )arg0 score:(CGFloat)arg1 ;


@end


#endif