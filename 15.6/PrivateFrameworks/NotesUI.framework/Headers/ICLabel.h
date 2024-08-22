// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLABEL_H
#define ICLABEL_H

@class UILabel, NSAttributedString, NSString;



@interface ICLabel : UILabel

@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) CGFloat lineHeight; // ivar: _lineHeight
@property (nonatomic) CGFloat paragraphSpacing; // ivar: _paragraphSpacing
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (copy, nonatomic) NSString *string; // ivar: _string


-(void)updateText;


@end


#endif