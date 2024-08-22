// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSVALUEADDEDSERVICEINFOVIEW_H
#define PKPASSVALUEADDEDSERVICEINFOVIEW_H

@class UIView, UILabel, UIImageView, PKPass;


#import "PKPassSnapshotter.h"

@interface PKPassValueAddedServiceInfoView : UIView {
    PKPassSnapshotter *_snapshotter;
    UILabel *_labelView;
    UIImageView *_snapshotView;
    UILabel *_statusView;
}


@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (nonatomic) NSInteger style; // ivar: _style


-(CGFloat)_baselineDistance;
-(id)_labelAttributedStringForString:(id)arg0 ;
-(id)_labelFont;
-(id)_statusAttributedStringForStyle:(NSInteger)arg0 ;
-(id)_statusFont;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )_snapshotSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_calculateViewMetricsForWidth:(CGFloat)arg0 labelSize:(struct CGSize *)arg1 statusSize:(struct CGSize *)arg2 baselineAdjustment:(*CGFloat)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif