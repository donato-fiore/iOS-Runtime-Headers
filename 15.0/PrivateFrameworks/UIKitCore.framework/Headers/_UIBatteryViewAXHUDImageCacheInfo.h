// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBATTERYVIEWAXHUDIMAGECACHEINFO_H
#define _UIBATTERYVIEWAXHUDIMAGECACHEINFO_H


#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIColor.h"

@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject

@property (retain, nonatomic) UIImage *cachedImage; // ivar: _cachedImage
@property (nonatomic) CGFloat capacity; // ivar: _capacity
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) BOOL reverseLayoutDirection; // ivar: _reverseLayoutDirection
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL showBolt; // ivar: _showBolt
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(BOOL)cacheMatchesCapacity:(CGFloat)arg0 fillColor:(id)arg1 tintColor:(id)arg2 showingBolt:(BOOL)arg3 reverseLayout:(BOOL)arg4 scale:(CGFloat)arg5 ;


@end


#endif