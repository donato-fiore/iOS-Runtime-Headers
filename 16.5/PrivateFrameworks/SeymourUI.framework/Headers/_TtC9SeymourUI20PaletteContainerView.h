// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI20PALETTECONTAINERVIEW_H
#define _TTC9SEYMOURUI20PALETTECONTAINERVIEW_H

@class UIView, NSArray;



@interface _TtC9SeymourUI20PaletteContainerView : UIView {
    ? backgroundView;
    ? containerView;
    ? contentInsets;
}


@property (nonatomic, copy) NSArray *interactions;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addInteraction:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeInteraction:(id)arg0 ;


@end


#endif