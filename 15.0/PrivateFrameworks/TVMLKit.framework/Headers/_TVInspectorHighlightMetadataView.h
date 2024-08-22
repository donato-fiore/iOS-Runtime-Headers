// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVINSPECTORHIGHLIGHTMETADATAVIEW_H
#define _TVINSPECTORHIGHLIGHTMETADATAVIEW_H

@class UIView, UILabel;



@interface _TVInspectorHighlightMetadataView : UIView

@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly, nonatomic) UILabel *frameLabel; // ivar: _frameLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif