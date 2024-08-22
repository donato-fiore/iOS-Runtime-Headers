// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLKVIEW_H
#define GLKVIEW_H

@class UIView, EAGLContext, NSMutableDictionary, UIImage;
@protocol NSCoding, GLKViewDelegate;



@interface GLKView : UIView <NSCoding>



@property (retain, nonatomic) EAGLContext *context; // ivar: _context
@property (nonatomic) NSObject<GLKViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) unsigned int depthRenderbuffer; // ivar: _depthRenderbuffer
@property (nonatomic) unsigned int depthStencilRenderbuffer; // ivar: _depthStencilRenderbuffer
@property (nonatomic) *unk drawRectIMP; // ivar: _drawRectIMP
@property (nonatomic) int drawableColorFormat; // ivar: _drawableColorFormat
@property (nonatomic) int drawableDepthFormat; // ivar: _drawableDepthFormat
@property (readonly, nonatomic) NSInteger drawableHeight; // ivar: _drawableHeight
@property (nonatomic) int drawableMultisample; // ivar: _drawableMultisample
@property (retain, nonatomic) NSMutableDictionary *drawableProperties; // ivar: _drawableProperties
@property (nonatomic) int drawableStencilFormat; // ivar: _drawableStencilFormat
@property (readonly, nonatomic) NSInteger drawableWidth; // ivar: _drawableWidth
@property (nonatomic) BOOL enableSetNeedsDisplay; // ivar: _enableSetNeedsDisplay
@property (nonatomic) BOOL inDraw; // ivar: _inDraw
@property (nonatomic) unsigned int multisampleColorRenderbuffer; // ivar: _multisampleColorRenderbuffer
@property (nonatomic) unsigned int multisampleFramebuffer; // ivar: _multisampleFramebuffer
@property (nonatomic) unsigned int resolveColorRenderbuffer; // ivar: _resolveColorRenderbuffer
@property (nonatomic) unsigned int resolveFramebuffer; // ivar: _resolveFramebuffer
@property (nonatomic) BOOL shouldDeleteFramebuffer; // ivar: _shouldDeleteFramebuffer
@property (readonly) UIImage *snapshot;
@property (nonatomic) unsigned int stencilRenderbuffer; // ivar: _stencilRenderbuffer
@property (nonatomic) CGRect viewBounds; // ivar: _viewBounds
@property (nonatomic) CGFloat viewContentScaleFactor; // ivar: _viewContentScaleFactor


+(Class)layerClass;
-(BOOL)_canDrawContent;
-(BOOL)_controlsOwnScaleFactor;
-(BOOL)_presentFramebuffer;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 context:(id)arg1 ;
-(void)_createFramebuffer;
-(void)_deleteFramebuffer;
-(void)_display:(BOOL)arg0 ;
-(void)_initCommon;
-(void)_resolveAndDiscard;
-(void)_setFramebuffer:(*BOOL)arg0 ;
-(void)bindDrawable;
-(void)dealloc;
-(void)deleteDrawable;
-(void)display;
-(void)displayLayer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setContentScaleFactor:(CGFloat)arg0 ;


@end


#endif