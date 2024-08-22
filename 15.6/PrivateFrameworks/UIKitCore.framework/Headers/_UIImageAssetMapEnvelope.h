// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGEASSETMAPENVELOPE_H
#define _UIIMAGEASSETMAPENVELOPE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIImageAsset.h"

@interface _UIImageAssetMapEnvelope : NSObject

@property (copy, nonatomic) NSString *assetName; // ivar: _assetName
@property (weak, nonatomic) UIImageAsset *imageAsset; // ivar: _imageAsset


+(id)wrapAsset:(id)arg0 ;
-(id)description;


@end


#endif