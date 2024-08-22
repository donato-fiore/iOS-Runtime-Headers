// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIVISUALEFFECTLABEL_H
#define VUIVISUALEFFECTLABEL_H

@class UIView, NSString, UIVisualEffectView;
@protocol VUILabelBaselineProtocol;


#import "VUILabel.h"

@interface VUIVisualEffectLabel : UIView <VUILabelBaselineProtocol>



@property (nonatomic) NSInteger blurEffectStyle; // ivar: _blurEffectStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUILabel *label; // ivar: _label
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visualEffectLabelType; // ivar: _visualEffectLabelType
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(NSInteger)_backdropStyleForVisualEffectType:(NSUInteger)arg0 traitCollection:(id)arg1 ;
+(id)labelWithType:(NSUInteger)arg0 label:(id)arg1 traitCollection:(id)arg2 existingVisualEffectLabel:(id)arg3 ;
-(CGFloat)topMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)vui_baselineOffsetFromBottom;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureVisualEffectForTraitCollection;
-(void)_updateContentWithNewLabel:(id)arg0 oldLabel:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif