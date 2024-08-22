// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BOOKMARKSBARLABELBUTTON_H
#define BOOKMARKSBARLABELBUTTON_H

@class UIButton, UIEditMenuInteraction, UILongPressGestureRecognizer, WebBookmark, NSString;
@protocol UIEditMenuInteractionDelegate, BookmarksBarLabelButtonDelegate;



@interface BookmarksBarLabelButton : UIButton <UIEditMenuInteractionDelegate>

 {
    UIEditMenuInteraction *_editMenuInteraction;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}


@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (nonatomic) UIEdgeInsets cursorRegionInset; // ivar: _cursorRegionInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BookmarksBarLabelButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLightControls; // ivar: _usesLightControls


+(id)labelButton;
-(BOOL)canBecomeFirstResponder;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct CGRect )editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)_handleLongPressGestureRecognizer:(id)arg0 ;
-(void)_openInNewTabs:(id)arg0 ;


@end


#endif