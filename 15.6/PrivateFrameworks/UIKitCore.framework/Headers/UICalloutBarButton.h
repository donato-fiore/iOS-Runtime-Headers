// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICALLOUTBARBUTTON_H
#define UICALLOUTBARBUTTON_H

@class NSDate;


#import "UIButton.h"
#import "_UISlotView.h"
#import "UITextReplacement.h"

@interface UICalloutBarButton : UIButton {
    int m_position;
    BOOL m_isText;
    BOOL m_single;
    BOOL m_padLeft;
    BOOL m_padRight;
    NSDate *m_appearanceDate;
    _UISlotView *m_securePasteButtonSlotView;
}


@property (readonly, nonatomic) SEL action; // ivar: m_action
@property (readonly, nonatomic) CGFloat additionalContentHeight; // ivar: m_additionalContentHeight
@property (readonly, nonatomic) CGFloat contentScale; // ivar: m_contentScale
@property (readonly, nonatomic) CGFloat contentWidth; // ivar: m_contentWidth
@property (nonatomic) CGFloat dividerOffset; // ivar: m_dividerOffset
@property (nonatomic) BOOL dontDismiss; // ivar: m_dontDismiss
@property (nonatomic) BOOL forceFlash; // ivar: forceFlash
@property (nonatomic) CGFloat imageVerticalAdjust; // ivar: m_imageVerticalAdjust
@property (readonly, nonatomic) BOOL isSecurePasteButton;
@property (nonatomic) NSInteger page; // ivar: m_page
@property (retain, nonatomic) UITextReplacement *textReplacement; // ivar: m_textReplacement
@property (readonly, nonatomic) int type; // ivar: m_type


+(id)buttonWithImage:(id)arg0 action:(SEL)arg1 type:(int)arg2 inView:(id)arg3 ;
+(id)buttonWithTitle:(id)arg0 action:(SEL)arg1 type:(int)arg2 inView:(id)arg3 ;
+(id)buttonWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
+(id)buttonWithTitle:(id)arg0 subtitle:(id)arg1 maxWidth:(CGFloat)arg2 action:(SEL)arg3 type:(int)arg4 inView:(id)arg5 ;
+(id)symbolConfigurationForScale:(CGFloat)arg0 ;
-(CGFloat)_scaleFactorForImage;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )adjustRectForPosition:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)_commonSetupWithAction:(SEL)arg0 type:(int)arg1 ;
-(void)cancelFlash;
-(void)configureForLeftPosition:(int)arg0 ;
-(void)configureForMiddlePosition;
-(void)configureForRightPosition:(int)arg0 ;
-(void)configureForSingle:(int)arg0 ;
-(void)configureForVerticalPosition:(int)arg0 ;
-(void)configureSecurePasteButtonWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)dealloc;
-(void)fadeAndSendActionWithAuthenticationMessage:(id)arg0 ;
-(void)flash:(id)arg0 forEvent:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)removeFromSuperview;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setupWithImage:(id)arg0 action:(SEL)arg1 type:(int)arg2 ;
-(void)setupWithTitle:(id)arg0 action:(SEL)arg1 type:(int)arg2 ;
-(void)setupWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)setupWithTitle:(id)arg0 subtitle:(id)arg1 maxWidth:(CGFloat)arg2 action:(SEL)arg3 type:(int)arg4 ;
-(void)touchDown;


@end


#endif