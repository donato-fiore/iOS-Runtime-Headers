// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSIGNATUREBASELINEVIEW_H
#define AKSIGNATUREBASELINEVIEW_H

@class UIView;



@interface AKSignatureBaselineView : UIView

@property (nonatomic) CGFloat baselinePercent; // ivar: _baselinePercent
@property (nonatomic) UIEdgeInsets lastSafeAreaInsets; // ivar: _lastSafeAreaInsets


-(BOOL)_isRTL;
-(CGFloat)scaleFactor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_drawBaselineInContext:(struct CGContext *)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif