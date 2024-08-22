// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMBURSTINDICATORVIEW_H
#define CAMBURSTINDICATORVIEW_H

@class UIView, UILabel;



@interface CAMBurstIndicatorView : UIView

@property (readonly, nonatomic) UIView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) UILabel *_countLabel; // ivar: __countLabel
@property (readonly, nonatomic) NSInteger _numberOfPhotos; // ivar: __numberOfPhotos
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle


-(NSInteger)incrementWithCaptureAnimation:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_performCaptureAnimation;
-(void)_updateAttributes;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)finishIncrementingWithCompletionHandler:(id)arg0 ;
-(void)layoutSubviews;
-(void)reset;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif