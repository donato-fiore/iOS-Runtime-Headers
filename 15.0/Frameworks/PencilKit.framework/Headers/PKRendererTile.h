// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRENDERERTILE_H
#define PKRENDERERTILE_H

@class CALayer, NSUUID, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKMetalFramebuffer.h"

@interface PKRendererTile : NSObject <NSCopying>

 {
    uint8_t _cachedContentsScale;
    uint8_t _renderCount;
    uint8_t _lastUsedTimestamp;
    CGAffineTransform _drawingTransform;
    BOOL _framebufferIsLocked;
    BOOL _multiplyFramebufferIsLocked;
    BOOL _sixChannelMode;
    BOOL _outOfDate;
    BOOL _hidden;
    CALayer *_tileLayer;
    CALayer *_tileMultiplyLayer;
    PKMetalFramebuffer *_framebuffer;
    PKMetalFramebuffer *_multiplyFramebuffer;
    NSUUID *_identifier;
    NSInteger _level;
    NSArray *_renderedStrokes;
    NSInteger _currentlyRenderingCount;
    CGFloat _contentsScale;
    CGFloat _opacity;
    CGPoint _offset;
    CGRect _drawingFrame;
    CGRect _frame;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif