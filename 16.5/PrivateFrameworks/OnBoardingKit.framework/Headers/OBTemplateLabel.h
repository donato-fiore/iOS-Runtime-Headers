// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBTEMPLATELABEL_H
#define OBTEMPLATELABEL_H

@class UILabel, NSString;



@interface OBTemplateLabel : UILabel

@property (copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName


-(id)init;
-(void)setText:(id)arg0 ;
-(void)setTitleTrailingSymbol:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTextAlignment;


@end


#endif