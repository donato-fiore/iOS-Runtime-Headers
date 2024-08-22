// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSEMANTICSTYLEDETAILVIEW_H
#define CAMSEMANTICSTYLEDETAILVIEW_H

@class UIView, NSNumberFormatter, UILabel;


#import "CAMSemanticStyle.h"

@interface CAMSemanticStyleDetailView : UIView

@property (readonly, nonatomic) NSNumberFormatter *_integerFormatter; // ivar: __integerFormatter
@property (readonly, nonatomic) UILabel *_styleDescriptionLabel; // ivar: __styleDescriptionLabel
@property (readonly, nonatomic) UILabel *_styleTitleLabel; // ivar: __styleTitleLabel
@property (readonly, nonatomic) UILabel *_toneTitleLabel; // ivar: __toneTitleLabel
@property (readonly, nonatomic) UILabel *_toneValueLabel; // ivar: __toneValueLabel
@property (readonly, nonatomic) UILabel *_warmthTitleLabel; // ivar: __warmthTitleLabel
@property (readonly, nonatomic) UILabel *_warmthValueLabel; // ivar: __warmthValueLabel
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle; // ivar: _semanticStyle


-(id)_descriptionForSemanticStylePreset:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTextForCurrentStyle;


@end


#endif