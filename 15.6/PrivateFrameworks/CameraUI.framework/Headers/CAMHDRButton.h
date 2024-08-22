// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMHDRBUTTON_H
#define CAMHDRBUTTON_H

@class NSArray, UIImageView, NSString;
@protocol CAMAccessibilityHUDImageProvider;


#import "CAMExpandableMenuButton.h"

@interface CAMHDRButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>



@property (nonatomic) NSInteger HDRMode;
@property (copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes; // ivar: __allowedModes
@property (readonly, nonatomic) UIImageView *_glyphView; // ivar: __glyphView
@property (nonatomic) BOOL allowsAutomaticHDR; // ivar: _allowsAutomaticHDR
@property (nonatomic) BOOL allowsHDROn; // ivar: _allowsHDROn
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAllowExpansion;
-(CGFloat)padHeaderViewContentInsetLeft;
-(NSInteger)modeForIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(NSUInteger)indexForMode:(NSInteger)arg0 ;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg0 ;
-(id)headerView;
-(id)imageForAccessibilityHUD;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)titleForMenuItemAtIndex:(NSInteger)arg0 ;
-(void)_commonCAMHDRButtonInitialization;
-(void)_updateAllowedModes;
-(void)_updateCurrentGlyphImage;
-(void)_updateFromAllowedModesChangeWithCurrentMode:(NSInteger)arg0 needsReloadData:(BOOL)arg1 ;
-(void)prepareHeaderViewForExpanding:(BOOL)arg0 ;
-(void)reloadData;


@end


#endif