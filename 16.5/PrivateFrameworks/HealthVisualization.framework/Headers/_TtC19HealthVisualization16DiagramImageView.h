// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHVISUALIZATION16DIAGRAMIMAGEVIEW_H
#define _TTC19HEALTHVISUALIZATION16DIAGRAMIMAGEVIEW_H

@class UIImageView;



@interface _TtC19HealthVisualization16DiagramImageView : UIImageView {
    ? imageRenderer;
    ? delegate;
    ? lastUsedTransformer;
    ? lastUsedModelSpace;
}


@property (nonatomic) CGRect bounds;
@property (nonatomic) CGRect frame;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif