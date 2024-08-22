// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJISPLITCATEGORYPICKER_H
#define UIKEYBOARDEMOJISPLITCATEGORYPICKER_H



#import "UIKeyboardEmojiSplit.h"

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {
    NSUInteger _currentSelected;
    NSInteger _lastUsedCategory;
}


@property BOOL whiteText; // ivar: _whiteText


-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)symbolForRow:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleForRow:(NSInteger)arg0 fallback:(BOOL)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setRenderConfig:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCategorySelectedIndicator:(NSInteger)arg0 ;
-(void)updateToCategory:(NSInteger)arg0 ;


@end


#endif