// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISTATUSLABEL_H
#define CCUISTATUSLABEL_H

@class UILabel, MTVisualStylingProvider;



@interface CCUIStatusLabel : UILabel {
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) NSUInteger verticalAlignment; // ivar: _verticalAlignment


-(id)init;
-(void)_contentSizeCategoryDidChange;
-(void)_updateVisualStyling;
-(void)didMoveToWindow;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif