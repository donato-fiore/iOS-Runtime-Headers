// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPAIREDDEVICEINFO_H
#define NNMKPAIREDDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface NNMKPairedDeviceInfo : NSObject

@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) CGFloat screenWidth; // ivar: _screenWidth


+(id)pairedDeviceInfoWithScreenWidth:(CGFloat)arg0 screenScale:(CGFloat)arg1 ;


@end


#endif