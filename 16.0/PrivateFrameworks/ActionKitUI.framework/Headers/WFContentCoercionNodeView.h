// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTCOERCIONNODEVIEW_H
#define WFCONTENTCOERCIONNODEVIEW_H

@class UIView, UILabel, WFContentCoercionNode, CAShapeLayer;



@interface WFContentCoercionNodeView : UIView

@property (weak, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) WFContentCoercionNode *node; // ivar: _node
@property (weak, nonatomic) CAShapeLayer *outlineLayer; // ivar: _outlineLayer


-(id)initWithFrame:(struct CGRect )arg0 isRootNode:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateColors;


@end


#endif