// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMKOVERLAYVIEW_H
#define EMKOVERLAYVIEW_H

@class UIView;


#import "EMKEmojiTokenList.h"

@interface EMKOverlayView : UIView {
    NSUInteger _numEmojiToShow;
    EMKEmojiTokenList *_emojiTokenList;
    CGRect _overlayRect;
    NSUInteger _selectedIndex;
    id *_selectionHandler;
    NSInteger _interfaceStyle;
}




-(id)initWithView:(id)arg0 anchorRect:(struct CGRect )arg1 emojiTokenList:(id)arg2 selectionHandler:(id)arg3 ;
-(void)dismiss;
-(void)dismissWithSelectedEmojiToken:(id)arg0 ;
-(void)drawBackground:(struct CGRect )arg0 ;
-(void)drawForeground:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)selectWithEvent:(id)arg0 ;
-(void)setView:(id)arg0 anchorRect:(struct CGRect )arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif