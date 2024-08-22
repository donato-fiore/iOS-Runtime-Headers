// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SULINKCONTROL_H
#define SULINKCONTROL_H

@class UIControl, UILabel;



@interface SULinkControl : UIControl {
    UILabel *_label;
    BOOL _sizeIsDirty;
    NSInteger _style;
}


@property (nonatomic) BOOL shouldDrawUnderline; // ivar: _shouldDrawUnderline


-(id)_label;
-(void)_updateLabel;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setStyle:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;
-(void)sizeToFit;


@end


#endif