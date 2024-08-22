// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMPLETIONARROWVIEW_H
#define COMPLETIONARROWVIEW_H

@class UIButton, UITableViewCell;



@interface CompletionArrowView : UIButton

@property (weak, nonatomic) UITableViewCell *parentCell; // ivar: _parentCell


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;


@end


#endif