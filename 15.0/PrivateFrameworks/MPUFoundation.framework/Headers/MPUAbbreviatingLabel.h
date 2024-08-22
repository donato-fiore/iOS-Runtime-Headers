// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUABBREVIATINGLABEL_H
#define MPUABBREVIATINGLABEL_H

@class UILabel, NSMutableArray, NSArray;



@interface MPUAbbreviatingLabel : UILabel {
    NSMutableArray *_textRepresentationSizes;
}


@property (copy, nonatomic) NSArray *textRepresentations; // ivar: _textRepresentations


-(void)_calculateTextSizes;
-(void)_selectBestRepresentation;
-(void)_setTextRepresentation:(id)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif