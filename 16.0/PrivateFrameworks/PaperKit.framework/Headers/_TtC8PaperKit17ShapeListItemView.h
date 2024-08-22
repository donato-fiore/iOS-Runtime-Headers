// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT17SHAPELISTITEMVIEW_H
#define _TTC8PAPERKIT17SHAPELISTITEMVIEW_H

@class UIControl;



@interface _TtC8PaperKit17ShapeListItemView : UIControl {
    ? imageView;
    ? cornerRadius;
    ? symbolPointSize;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif