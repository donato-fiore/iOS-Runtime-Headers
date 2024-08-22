// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFILTERFOOTERVIEW_H
#define PXFILTERFOOTERVIEW_H

@class UIView, UILabel, UIButton;
@protocol PXFilterFooterViewDelegate;


#import "PXContentFilterState.h"

@interface PXFilterFooterView : UIView {
    UILabel *_captionLabel;
    UIButton *_filterButton;
}


@property (retain, nonatomic) PXContentFilterState *contentFilterState; // ivar: _contentFilterState
@property (weak, nonatomic) NSObject<PXFilterFooterViewDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 libraryType:(NSInteger)arg1 ;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_showFilterUI:(id)arg0 ;
-(void)_updateDisplay;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif