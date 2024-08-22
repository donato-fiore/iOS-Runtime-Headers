// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLINEVIEW_H
#define CKLINEVIEW_H

@class UIView, CABackdropLayer, CAShapeLayer;



@interface CKLineView : UIView

@property (retain, nonatomic) CABackdropLayer *backdropFilterLayer; // ivar: _backdropFilterLayer
@property (retain, nonatomic) CAShapeLayer *lineShapeLayer; // ivar: _lineShapeLayer
@property (nonatomic) BOOL shouldUseDarkFSMStrokeColor; // ivar: _shouldUseDarkFSMStrokeColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateReplyLineColor;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif