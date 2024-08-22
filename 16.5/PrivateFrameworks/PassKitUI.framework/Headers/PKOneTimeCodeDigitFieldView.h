// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKONETIMECODEDIGITFIELDVIEW_H
#define PKONETIMECODEDIGITFIELDVIEW_H

@class UIView, UILabel, NSString;



@interface PKOneTimeCodeDigitFieldView : UIView {
    UILabel *_label;
}


@property (nonatomic) NSUInteger highligtType; // ivar: _highligtType
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)codeEntryFont;
-(id)initWithIndex:(NSInteger)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateLayer;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif