// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOMPOSETEXTFIELDLISTVIEW_H
#define SKUICOMPOSETEXTFIELDLISTVIEW_H

@class UIView, NSMutableArray, UIResponder;
@protocol SKUIComposeTextFieldListViewDelegate;



@interface SKUIComposeTextFieldListView : UIView {
    NSMutableArray *_fields;
    BOOL _isValid;
}


@property (readonly, nonatomic) NSInteger composeReviewStyle; // ivar: _style
@property (weak, nonatomic) NSObject<SKUIComposeTextFieldListViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) UIResponder *initialFirstResponder;


-(BOOL)isValid;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)textForFieldAtIndex:(NSUInteger)arg0 ;
-(void)_updateValidity;
-(void)composeTextFieldValidityChanged:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadData;


@end


#endif