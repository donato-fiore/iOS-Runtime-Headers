// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNSLIDENUMBERPLACEHOLDERREP_H
#define KNSLIDENUMBERPLACEHOLDERREP_H



#import "KNPlaceholderRep.h"

@interface KNSlideNumberPlaceholderRep : KNPlaceholderRep



+(id)mixableObjectClasses;
-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg0 ;
-(BOOL)canMakePathEditable;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)shouldBeginEditingOnSingleClick;
-(BOOL)wantsContextMenuWhenEditingDisabledAtPoint:(struct CGPoint )arg0 ;


@end


#endif