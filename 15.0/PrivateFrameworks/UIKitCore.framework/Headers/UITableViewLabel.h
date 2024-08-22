// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWLABEL_H
#define UITABLEVIEWLABEL_H

@class NSAttributedString;


#import "UILabel.h"
#import "UITableViewCell.h"

@interface UITableViewLabel : UILabel {
    NSInteger _savedNumberOfLines;
    CGFloat _firstParagraphFirstLineHeadIndent;
    NSAttributedString *_shadowAttributedText;
}


@property (weak, nonatomic) UITableViewCell *tableCell; // ivar: _tableCell
@property (readonly, nonatomic) BOOL usingDefaultFont; // ivar: _usingDefaultFont


-(BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg0 ;
-(id)_disabledFontColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cleanupErrantFirstLineHeadIndent;
-(void)_clearNumberOfLines;
-(void)_restoreNumberOfLines;
-(void)_setDefaultFont:(id)arg0 ;
-(void)_setFirstParagraphFirstLineHeadIndent:(CGFloat)arg0 ;
-(void)_setNumberOfLinesForAXLayoutIfNecessary;
-(void)setAttributedText:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif