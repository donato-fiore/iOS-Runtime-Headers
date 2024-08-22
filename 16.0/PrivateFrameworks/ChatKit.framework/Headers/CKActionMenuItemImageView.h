// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKACTIONMENUITEMIMAGEVIEW_H
#define CKACTIONMENUITEMIMAGEVIEW_H

@class UIImageView, UIColor, NSString;
@protocol CKActionMenuItemView;



@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView>

 {
    UIColor *_unhighlightedTintColor;
    UIColor *_highlightedTintColor;
    BOOL _enabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithImage:(id)arg0 tintColor:(id)arg1 highlightedTintColor:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateTintColor;


@end


#endif