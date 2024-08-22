// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIBACKGROUNDVIEW_H
#define SEARCHUIBACKGROUNDVIEW_H

@class UIView;



@interface SearchUIBackgroundView : UIView

@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter; // ivar: _inPreviewPlatter
@property (retain) UIView *platterView; // ivar: _platterView
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections


-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif