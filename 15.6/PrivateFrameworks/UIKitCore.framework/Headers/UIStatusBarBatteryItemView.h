// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBARBATTERYITEMVIEW_H
#define UISTATUSBARBATTERYITEMVIEW_H



#import "UIStatusBarItemView.h"
#import "UIView.h"
#import "UIImage.h"
#import "_UILegibilityImageSet.h"

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
    int _capacity;
    int _state;
    BOOL _batterySaverModeActive;
    UIView *_accessoryView;
}


@property (nonatomic) int cachedAXHUDCapacity; // ivar: _cachedAXHUDCapacity
@property (retain, nonatomic) UIImage *cachedAXHUDImage; // ivar: _cachedAXHUDImage
@property (nonatomic) NSUInteger cachedAXHUDStyle; // ivar: _cachedAXHUDStyle
@property (nonatomic) NSUInteger cachedBatteryStyle; // ivar: _cachedBatteryStyle
@property (nonatomic) int cachedCapacity; // ivar: _cachedCapacity
@property (nonatomic) BOOL cachedImageHasAccessoryImage; // ivar: _cachedImageHasAccessoryImage
@property (retain, nonatomic) _UILegibilityImageSet *cachedImageSet; // ivar: _cachedImageSet


-(BOOL)_needsAccessoryImage;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraRightPadding;
-(CGFloat)legibilityStrength;
-(id)_accessoryImage;
-(id)_contentsImage;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(struct CGSize )_batteryOffsetWithBackground:(id)arg0 ;
-(void)_updateAccessoryImage;


@end


#endif