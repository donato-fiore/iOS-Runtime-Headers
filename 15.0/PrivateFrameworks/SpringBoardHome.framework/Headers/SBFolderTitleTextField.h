// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFOLDERTITLETEXTFIELD_H
#define SBFOLDERTITLETEXTFIELD_H

@class UITextField, _UILegibilitySettings;



@interface SBFolderTitleTextField : UITextField

@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) CGFloat fontSize;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) BOOL showingEditUI; // ivar: _showingEditUI


+(id)_clearButtonImage;
+(void)warmupIfNecessary;
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_textRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )borderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateLegibility;
-(void)setShowsEditUI:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif