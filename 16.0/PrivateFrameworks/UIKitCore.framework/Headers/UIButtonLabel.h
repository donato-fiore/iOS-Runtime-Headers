// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIBUTTONLABEL_H
#define UIBUTTONLABEL_H



#import "UILabel.h"
#import "UIButton.h"

@interface UIButtonLabel : UILabel {
    BOOL _reverseShadow;
    UIButton *_button;
    BOOL _externallySetNumberOfLines;
}


@property (readonly, nonatomic) BOOL _fontIsDefaultForIdiom; // ivar: _fontIsDefaultForIdiom


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_textColorFollowsTintColor;
-(CGFloat)_paddingForBaselineSpacingFromEdge:(int)arg0 toNeighborEdge:(int)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 button:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )shadowOffset;
-(void)_contentDidChange:(NSInteger)arg0 fromContent:(id)arg1 ;
-(void)_internallySetNumberOfLines:(NSInteger)arg0 ;
-(void)_setFont:(id)arg0 isDefaultForIdiom:(BOOL)arg1 ;
-(void)_setWantsAutolayout;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(void)setFont:(id)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setReverseShadow:(BOOL)arg0 ;
-(void)setShadowOffset:(struct CGSize )arg0 ;


@end


#endif