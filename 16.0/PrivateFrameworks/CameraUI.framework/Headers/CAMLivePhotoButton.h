// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLIVEPHOTOBUTTON_H
#define CAMLIVEPHOTOBUTTON_H

@class NSString;
@protocol CAMAccessibilityHUDImageProvider;


#import "CAMExpandableMenuButton.h"
#import "CAMLivePhotoBloomView.h"

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>



@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView; // ivar: __bloomView
@property (nonatomic) BOOL allowsAutomaticMode; // ivar: _allowsAutomaticMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger livePhotoMode;
@property (readonly) Class superclass;


+(CGFloat)enablingAnimationDuration;
-(NSInteger)indexForMode:(NSInteger)arg0 ;
-(NSInteger)modeForIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(id)_availableModes;
-(id)_currentBaseImage;
-(id)headerView;
-(id)imageForAccessibilityHUD;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)titleForMenuItemAtIndex:(NSInteger)arg0 ;
-(void)_updateBaseImage;
-(void)finishExpansionAnimated:(BOOL)arg0 ;
-(void)interruptEnablingAnimation;
-(void)performEnablingAnimation;
-(void)prepareHeaderViewForExpanding:(BOOL)arg0 ;
-(void)reloadData;
-(void)setSelectedIndex:(NSInteger)arg0 ;


@end


#endif