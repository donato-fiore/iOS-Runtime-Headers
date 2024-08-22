// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PHCROPINFO_H
#define _PHCROPINFO_H


#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface _PHCropInfo : NSObject

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) CGFloat cropScore; // ivar: _cropScore


-(id)initWithAsset:(id)arg0 cropScore:(CGFloat)arg1 ;


@end


#endif