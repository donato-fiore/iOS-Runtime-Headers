// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWLAYOUTENGINERELATIVEALIGNMENTRECTORIGINCACHE_H
#define _UIVIEWLAYOUTENGINERELATIVEALIGNMENTRECTORIGINCACHE_H

@class NSISEngine;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject {
    CGPoint _cachedOrigin;
}


@property (weak, nonatomic) NSISEngine *cacheEngine; // ivar: _cacheEngine
@property (readonly, weak, nonatomic) UIView *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) CGPoint origin;
@property (nonatomic) NSUInteger variableChangeCount; // ivar: _variableChangeCount


-(id)initWithDelegate:(id)arg0 ;


@end


#endif