// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTIMERBUTTON_H
#define CAMTIMERBUTTON_H

@class UIImageView, NSString;
@protocol CAMAccessibilityHUDImageProvider, CAMTimerButtonDelegate;


#import "CAMExpandableMenuButton.h"

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>



@property (readonly, nonatomic) UIImageView *_glyphView; // ivar: __glyphView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMTimerButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger duration;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideOffWhenCollapsed; // ivar: _hideOffWhenCollapsed
@property (readonly) Class superclass;


-(CGFloat)padHeaderViewContentInsetLeft;
-(NSInteger)numberOfMenuItems;
-(id)_currentGlyphImageForAccessibiliyHUD:(BOOL)arg0 ;
-(id)headerView;
-(id)imageForAccessibilityHUD;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)shownIndexesWhileCollapsed;
-(id)titleForMenuItemAtIndex:(NSInteger)arg0 ;
-(void)_commonCAMTimerButtonInitialization;
-(void)_updateCurrentGlyphImage;
-(void)reloadData;


@end


#endif