// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVIEW_H
#define AVVIEW_H

@class UIView;



@interface AVView : UIView

@property (nonatomic) BOOL hasBackdropView; // ivar: _hasBackdropView
@property (nonatomic) BOOL ignoresTouches; // ivar: _ignoresTouches


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif