// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPREVIEWPARAMETERS_H
#define UIPREVIEWPARAMETERS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIBezierPath.h"

@interface UIPreviewParameters : NSObject <NSCopying>

 {
    NSArray *_textLineRects;
}


@property (nonatomic, getter=_textPathCornerRadius, setter=_setTextPathCornerRadius:) CGFloat _textPathCornerRadius; // ivar: _textPathCornerRadius
@property (nonatomic, getter=_textPathInsets, setter=_setTextPathInsets:) UIEdgeInsets _textPathInsets; // ivar: _textPathInsets
@property (nonatomic) BOOL appliesShadow; // ivar: _appliesShadow
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (nonatomic) BOOL hidesSourceViewDuringDropAnimation; // ivar: _hidesSourceViewDuringDropAnimation
@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) NSInteger previewMode; // ivar: _previewMode
@property (copy, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath
@property (readonly, nonatomic, getter=_isSingleLineText) BOOL singleLineText;
@property (copy, nonatomic) UIBezierPath *visiblePath; // ivar: _visiblePath


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMode:(NSInteger)arg0 visiblePath:(id)arg1 backgroundColor:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTextLineRects:(id)arg0 ;


@end


#endif