// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTAGBANNER_H
#define FCTAGBANNER_H


#import <Foundation/Foundation.h>

#import "FCAssetHandle.h"

@interface FCTagBanner : NSObject

@property (readonly, nonatomic) FCAssetHandle *assetHandle; // ivar: _assetHandle
@property (readonly, nonatomic) FCEdgeInsets insets; // ivar: _insets
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)initWithAssetHandle:(id)arg0 size:(struct CGSize )arg1 insets:(struct FCEdgeInsets )arg2 ;


@end


#endif