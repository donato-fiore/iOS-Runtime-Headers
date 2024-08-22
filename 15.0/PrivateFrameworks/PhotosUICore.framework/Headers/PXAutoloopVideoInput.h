// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAUTOLOOPVIDEOINPUT_H
#define PXAUTOLOOPVIDEOINPUT_H

@class AVAsset, NSURL;

#import <Foundation/Foundation.h>


@interface PXAutoloopVideoInput : NSObject

@property (readonly, copy, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL


+(id)inputWithAsset:(id)arg0 imageURL:(id)arg1 ;
-(id)initWithAsset:(id)arg0 imageURL:(id)arg1 ;


@end


#endif