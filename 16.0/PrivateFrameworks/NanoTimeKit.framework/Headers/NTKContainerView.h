// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCONTAINERVIEW_H
#define NTKCONTAINERVIEW_H

@class UIView;
@protocol NTKContainerViewLayoutDelegate;



@interface NTKContainerView : UIView {
    ? _delegateRespondsTo;
}


@property (weak, nonatomic) NSObject<NTKContainerViewLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif