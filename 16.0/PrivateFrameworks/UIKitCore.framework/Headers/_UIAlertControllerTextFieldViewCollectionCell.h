// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIALERTCONTROLLERTEXTFIELDVIEWCOLLECTIONCELL_H
#define _UIALERTCONTROLLERTEXTFIELDVIEWCOLLECTIONCELL_H



#import "UICollectionViewCell.h"
#import "_UIAlertControllerTextFieldView.h"
#import "UITapGestureRecognizer.h"

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {
    _UIAlertControllerTextFieldView *_textField;
    UITapGestureRecognizer *_selectButtonGesture;
}


@property (readonly, nonatomic) _UIAlertControllerTextFieldView *textField;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusedView;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_selectButton:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif