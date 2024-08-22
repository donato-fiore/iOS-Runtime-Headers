// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKSBARLABELBUTTON_H
#define BOOKMARKSBARLABELBUTTON_H

@class UIButton, UILongPressGestureRecognizer, WebBookmark;
@protocol BookmarksBarLabelButtonDelegate;



@interface BookmarksBarLabelButton : UIButton {
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}


@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (nonatomic) UIEdgeInsets cursorRegionInset; // ivar: _cursorRegionInset
@property (weak, nonatomic) NSObject<BookmarksBarLabelButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL usesLightControls; // ivar: _usesLightControls


+(id)labelButton;
-(BOOL)canBecomeFirstResponder;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)_handleLongPressGestureRecognizer:(id)arg0 ;
-(void)_openInNewTabs:(id)arg0 ;


@end


#endif