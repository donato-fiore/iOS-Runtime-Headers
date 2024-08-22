// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSFIELDVIEW_H
#define PKPASSFIELDVIEW_H

@class UIView, PKPassField, UILabel;


#import "PKPassColorProfile.h"
#import "PKDiffView.h"
#import "PKPassFieldTemplate.h"

@interface PKPassFieldView : UIView {
    BOOL _needsRecalculation;
    CGSize _cachedSize;
    NSInteger _background;
}


@property (retain, nonatomic) PKPassColorProfile *colorProfile; // ivar: _colorProfile
@property (retain, nonatomic) PKDiffView *diffView; // ivar: _diffView
@property (retain, nonatomic) PKPassField *field; // ivar: _field
@property (retain, nonatomic) PKPassFieldTemplate *fieldTemplate; // ivar: _fieldTemplate
@property (readonly, nonatomic) UILabel *labelLabel; // ivar: _labelLabel
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


+(id)newViewForField:(id)arg0 fieldTemplate:(id)arg1 ;
-(BOOL)_shouldDisplayLabel;
-(id)_labelAttributedStringForColorProfile:(id)arg0 ;
-(id)_valueAttributedStringForColorProfile:(id)arg0 ;
-(id)description;
-(id)initWithField:(id)arg0 fieldTemplate:(id)arg1 ;
-(struct CGSize )_resizeMultiLineValueFontForAvailableSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)invalidateCachedFieldSize;
-(void)layoutSubviews;
-(void)presentDiff:(id)arg0 inView:(id)arg1 completion:(id)arg2 ;


@end


#endif