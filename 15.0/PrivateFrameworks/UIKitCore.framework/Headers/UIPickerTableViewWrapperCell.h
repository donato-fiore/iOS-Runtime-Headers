// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPICKERTABLEVIEWWRAPPERCELL_H
#define UIPICKERTABLEVIEWWRAPPERCELL_H



#import "UIPickerTableViewCell.h"
#import "UIView.h"

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    CGSize _wrappedViewSize;
}


@property (retain, nonatomic) UIView *wrappedView;
@property (nonatomic) UIEdgeInsets wrappedViewInsets; // ivar: _wrappedViewInsets


-(id)_anyDateLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setIsCenterCell:(BOOL)arg0 shouldModifyAlphaOfView:(BOOL)arg1 ;
-(void)_updateWrappedView;
-(void)_updateWrappedViewFrame;
-(void)prepareForReuse;
-(void)resizeSubviewsWithOldSize:(struct CGSize )arg0 ;


@end


#endif