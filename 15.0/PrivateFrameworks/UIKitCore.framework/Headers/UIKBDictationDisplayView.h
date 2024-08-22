// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBDICTATIONDISPLAYVIEW_H
#define UIKBDICTATIONDISPLAYVIEW_H



#import "UIKBKeyView.h"
#import "UIDictationView.h"

@interface UIKBDictationDisplayView : UIKBKeyView

@property (retain, nonatomic) UIDictationView *dictationView; // ivar: _dictationView


-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
-(void)prepareForDisplay;
-(void)removeFromSuperview;
-(void)setRenderConfig:(id)arg0 ;
-(void)updateDictationColor;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif