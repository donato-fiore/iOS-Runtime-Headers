// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKALIGNEDCONTENTCONTAINERVIEW_H
#define PKALIGNEDCONTENTCONTAINERVIEW_H

@class UIView;



@interface PKAlignedContentContainerView : UIView {
    CGSize _size;
}


@property (nonatomic) ? alignment; // ivar: _alignment
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView


-(id)initWithContentView:(id)arg0 alignment:(struct ? )arg1 size:(struct CGSize )arg2 ;
-(void)layoutSubviews;


@end


#endif