// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKATTRIBUTIONLABEL_H
#define MKATTRIBUTIONLABEL_H

@class UIView, NSAttributedString;



@interface MKAttributionLabel : UIView {
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    BOOL _useDarkText;
}


@property (nonatomic) NSInteger displayStyle; // ivar: _displayStyle
@property (nonatomic) NSUInteger mapType; // ivar: _mapType


-(id)_attributesWithStroke:(BOOL)arg0 ;
-(id)_labelTitle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_prepareLabel;
-(void)_updateTextColor;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif