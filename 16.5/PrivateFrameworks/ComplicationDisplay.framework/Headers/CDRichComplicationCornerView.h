// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONCORNERVIEW_H
#define CDRICHCOMPLICATIONCORNERVIEW_H

@class UIBezierPath, NSString;
@protocol CDRichComplicationCornerPositionable;


#import "CDRichComplicationTemplateView.h"

@interface CDRichComplicationCornerView : CDRichComplicationTemplateView <CDRichComplicationCornerPositionable>

 {
    NSInteger _fontFallback;
    UIBezierPath *_hitTestPath;
    CGRect _hitTestBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat innerComponentRotationInDegree; // ivar: _innerComponentRotationInDegree
@property (nonatomic) CGFloat outerComponentRotationInDegree; // ivar: _outerComponentRotationInDegree
@property (nonatomic) NSInteger position; // ivar: _position
@property (readonly) Class superclass;


+(struct CGSize )viewSizeForDevice:(id)arg0 ;
-(id)_createAndAddColoringLabelWithFontSize:(CGFloat)arg0 ;
-(id)_fontWithSize:(CGFloat)arg0 fontWeight:(CGFloat)arg1 ;
-(id)_fontWithSize:(CGFloat)arg0 withFontDescriptor:(id)arg1 ;
-(id)init;
-(id)initWithFamily:(NSInteger)arg0 ;
-(id)initWithFontFallback:(NSInteger)arg0 ;
-(void)_layoutCurvedLabel:(id)arg0 centerAngleInDegree:(CGFloat)arg1 editingRotationInDegree:(CGFloat)arg2 ;
-(void)_layoutView:(id)arg0 origin:(struct CGPoint )arg1 editingTranslation:(struct CGPoint )arg2 editingRotationInDegree:(CGFloat)arg3 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
-(void)_updateColoringLabel:(id)arg0 withFontWeight:(CGFloat)arg1 ;


@end


#endif