// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKPICKEDPHOTO_H
#define _NTKPICKEDPHOTO_H

@class PHAsset;

#import <Foundation/Foundation.h>

#import "NTKPhoto.h"

@interface _NTKPickedPhoto : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) NTKPhoto *photo; // ivar: _photo
@property (nonatomic) NSUInteger subsampleFactor; // ivar: _subsampleFactor




@end


#endif